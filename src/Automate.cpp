/*************************************************************************
                           Automate  -  Automate de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Automate> (fichier Automate.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
    
using namespace std;

//------------------------------------------------------ Include personnel
#include "Automate.h"
#include "etats/E0.h"

#include "symboles/Symbole.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Automate::Reduction ( Symbole * symboleEmpile, int nbDepile )
{
	for ( int i = 0 ; i < nbDepile ; i++ )
    {
        delete pileEtats.top();
        pileEtats.pop();
    }
    pileEtats.top()->Transition(*this, symboleEmpile);
}

void Automate::Decalage ( Symbole * symboleEmpile, Etat * etatEmpile )
{
	pileSymboles.push(symboleEmpile);
	if(etatEmpile != 0)
	{
    	pileEtats.push(etatEmpile);
	}
	if(symboleEmpile->EstTerminal())
	{
		lexer.ConsommerSymbole();
	}
}

Symbole * Automate::PopSymbole ( )
{
	Symbole * symbole = pileSymboles.top();
    pileSymboles.pop();
    return symbole;
}

bool Automate::Executer ( )
{
	//s'assurer que les piles d'états et de symboles sont vides
	viderPiles();

	//initialiser la pile d'états avec E0
	E0 * initialState = new E0();
	pileEtats.push(initialState);
	
	//tant que l'état final n'a pas été atteint
	//(PROG est au sommet de la pile des symboles et E0 de la pile des états)
	do
	{
		//exécuter la transition
		Symbole *s = lexer.LireSymbole();
		if(s == NULL)
		{
			//erreur de reconnaissance du symbole
			viderPiles();
			
			return false;
		}

#ifdef AUTOMAP
		cerr << "##" << *s << "(" << s->GetNom() << ") ";
		pileEtats.top()->Print();
#endif
		if(!pileEtats.top()->Transition(*this, s))
		{
			//une transition a échoué, supprimer tous les symboles/états de l'automate
			//et renvoyer false
			
			cout << "Error while applying transition " << (int)(*lexer.LireSymbole())
			     << " to state ";
			pileEtats.top()->Print();
			
			viderPiles();
			
			return false;
		}
#ifdef AUTOMAP
		cerr << " -> ";
		pileEtats.top()->Print();
		cerr << "###" << (int)*(pileSymboles.top()) << endl;
#endif
	} while(pileSymboles.empty() || (int)*(pileSymboles.top()) != PROG);
#ifdef AUTOMAP
	cerr << "###" << pileSymboles.size() << endl;
#endif
	//si nous sommes arrivés ici, tout s'est bien passé.
	//nous pourrons récupérer le programme au sommet de la pile de symboles.
	return true;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Automate::Automate ( const Automate & unAutomate )
    : pileSymboles ( unAutomate.pileSymboles ),
      pileEtats ( unAutomate.pileEtats ),
      lexer ( unAutomate.lexer )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Automate>" << endl;
#endif
} //----- Fin de Automate (constructeur de copie)


Automate::Automate ( string nomFichier ) : lexer ( nomFichier )
{
#ifdef MAP
    cout << "Appel au constructeur de <Automate>" << endl;
#endif
} //----- Fin de Automate


Automate::~Automate ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Automate>" << endl;
#endif
} //----- Fin de ~Automate


int main ( int argc, char ** argv )
{
    if(argc < 2)
    {
        cerr << "Erreur, veuillez specifier des arguments" << endl;
  		cerr << "Utilisation :" << endl;
    	cerr << argv[0] << " [-p] [-a] [-e] [-o] source.lt" << endl;
      	cerr << "[-p] affiche le code source reconnu" << endl;
		cerr << "[-a] analyse le programme de maniere statique" << endl;
        cerr << "[-e] execute interactivement le programme" << endl;
        cerr << "[-o] optimise les expressions et instructions" << endl;
        return 1;
    }
    try {
        Automate a(argv[1]);
        a.Executer();
    } catch ( string msg ) {
        cerr << msg << endl;
        return 1;
    }
    return 0;
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
void Automate::viderPiles()
{
	while(!pileSymboles.empty())
	{
		delete pileSymboles.top();
		pileSymboles.pop();
	}
	
	while(!pileEtats.empty())
	{
		//pileEtats.top()->Print();
		delete pileEtats.top();
		pileEtats.pop();
	}
}
