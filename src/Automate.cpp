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
    pileEtats.push(etatEmpile);
}

Symbole * Automate::PopSymbole ( )
{
	Symbole * symbole = pileSymboles.top();
    pileSymboles.pop();
    return symbole;
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
    Symbole *s;
    do
    {
        s = lexer.LireSymbole();
        lexer.ConsommerSymbole();
        if(s!=0)
            cout << s->GetNom() << endl;
    } while(s!=0);

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
        cout << "Usage: " << argv[0] << " fichier" << endl;
        return -1;
    }
    try {
        new Automate(argv[1]);
    } catch ( string msg ) {
        cerr << "Erreur : " << msg << endl;
    }
    return 0;
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
