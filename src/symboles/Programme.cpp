/*************************************************************************
                           Programme  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Programme> (fichier Programme.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <map>

using namespace std;

//------------------------------------------------------ Include personnel
#include "Programme.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Programme::Executer ( )
{
    for ( Instruction * instruction : listeInstructions )
    {
        instruction->Executer ( tableDeclarations );
    }
}

//------------------------------------------------- Surcharge d'opérateurs
ostream & operator << ( ostream & out, const Programme & programme )
{
    for ( auto & declaration : programme.tableDeclarations )
    {
        out << *(declaration.second) << endl;
    }
    for ( Instruction * instruction : programme.listeInstructions )
    {
        out << *instruction << endl;
    }
    return out;
}

Programme:VerificationStatique(){
    /*
    1 — Une variable est utilisée (en partie droite d’une affectation ou dans une opération d’écriture) sans avoir
    	jamais été affectée.
    3 — Une variable a été déclarée et jamais affectée ou utilisée.
    3 — Une variable n’a pas été déclarée.
    4 — Une constante ne peut être modifiée.
    */
    bool verificationStatiqueCorrecte = true;

	for(list<Symbole>::iterator instruction=listeInstructions.begin(); instruction != listeInstructions.end(); ++instruction){
		
		map<string, Declaration *>::iterator declaration = tableDeclarations.find( instruction->getId() );

		//On verifie que la variable courante soit bien déclarée auparavant: Point 3
		if(declaration == tableDeclarations.end())
		{
			cerr << "EREUR : La variable " << instruction->getNomVariable() << " n'est pas déclarée" << endl;
			verificationStatiqueCorrecte = false;
			continue;
		}
		
		if(instruction->GetType() == INSTR_LIRE || instruction->GetType() == INSTR_AFF) {
			if(!declaration->second.EstAffectable()){ // On vérifie que l'on affecte pas une constante: Point 4
				cerr << "ERREUR : La constante " << declaration->getId() << " ne peut pas être modifiée" << endl;
				verificationStatiqueCorrecte = false;
			}
			else{
				//On dit que la variable est bien utilisée
				declaration->second->UtiliserValeur();
			}
		}
		if(instruction->GetType() == INSTR_ECRIRE || instruction->GetType() == INSTR_AFF) {
			if(!declaration->second.EstAffecte()){ // On vérifie que l'on utilise bien des variables instanciées (valeur affectée): Point 1
				cerr << "ERREUR : La variable " << declaration->getId() << " n'a pas été instanciée" << endl;
				verificationStatiqueCorrecte = false;
			}
		}
	}
	
	//On vérifie que toutes les variables déclarées soient utilisées, sinon warning: Point 2
	for(map<string, Declaration *>::iterator declaration=tableDeclarations.begin(); declaration != tableDeclarations.end(); ++declaration){
		if (!declaration->second->EstUtilise()) {
			cerr << "AVERTISSEMENT : La variable " << declaration->getNomVariable() << " n'est jamais utilisée" << endl;
			verificationStatiqueCorrecte = false;
		}
	}
}

//-------------------------------------------- Constructeurs - destructeur
Programme::Programme ( const Programme & unProgramme ) 
    : Symbole ( unProgramme ),
      tableDeclarations ( unProgramme.tableDeclarations ),
      listeInstructions ( unProgramme.listeInstructions )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Programme>" << endl;
#endif
} //----- Fin de Programme (constructeur de copie)

Programme::Programme ( map < string, Declaration * > tblDeclarations,
        list < Instruction * > lstInstructions )
    : Symbole ( "", PROG, false ), tableDeclarations(tblDeclarations),
      listeInstructions(lstInstructions)
{
#ifdef MAP
    cout << "Appel au constructeur de <Programme>" << endl;
#endif
} //----- Fin de Programme

Programme::~Programme ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Programme>" << endl;
#endif
} //----- Fin de ~Programme


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
