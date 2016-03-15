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
	for(list<Symbole>::iterator itInstr=listeInstructions.begin(); itInstr != listeInstructions.end(); ++itInstr){
		
		map<string, Declaration *>::iterator itDecl = tableDeclarations.find( itInstr->getNomVariable() );
		//On verifie que la variable courante soit bien déclarée auparavant
		if(itDecl == tableDeclarations.end())
		{
			cerr << "EREUR : La variable " << itDecl->getNomVariable() << " n'est pas déclarée" << endl;
			continue;
		}
		
		if(itInstr->getId() == EXPR_LIRE) {
			if(!itDecl->second.estAffectable()){ // On vérifie que l'on affecte pas une constante
				cerr << "ERREUR : La constante " << itDecl->getNomVariable() << " ne peut pas être modifiée" << endl;
			}
			else{
				//On dit que la variable est bien utilisée
				itDecl->second->setAffectee(true);
			}
		}
		else if(itInstr->getId() == EXPR_ECRIRE) {
			
		}
		else if(itInstr->getId() == EXPR_AFFECTATION) {
			if(!itDecl->second.estAffectable()){ // On vérifie que l'on affecte pas une constante
				cerr << "ERREUR : La constante " << itDecl->getNomVariable() << " ne peut pas être modifiée" << endl;
			}
			else{
				//On dit que la variable est bien utilisée
				itDecl->second->setAffectee(true);
			}
		}
	}
	
	//On vérifie que toutes les variables déclarée soient utilisées, sinon warning
	for(map<string, Declaration *>::iterator itDecl=tableDeclarations.begin(); itDecl != tableDeclarations.end(); ++itDecl){
		if (!itDecl->second->estAffectee()) {
			cerr << "AVERTISSEMENT : La variable " << itDecl->getNomVariable() << " n'est jamais utilisée" << endl;
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
