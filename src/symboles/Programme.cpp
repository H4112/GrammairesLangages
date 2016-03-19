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
        out << *(declaration.second) << ";" << endl;
    }
    for ( Instruction * instruction : programme.listeInstructions )
    {
        out << *instruction << ";" << endl;
    }
    return out;
}

bool Programme::Verifier ( )
{    
	/*
    1 — Une variable est utilisée (en partie droite d’une affectation ou dans une opération d’écriture) sans avoir
    	jamais été affectée.
    3 — Une variable a été déclarée et jamais affectée ou utilisée.
    3 — Une variable n’a pas été déclarée.
    4 — Une constante ne peut être modifiée.
    */
	bool resultat = true;
	for(Instruction * instruction : listeInstructions)
	{
		if(!instruction->Verifier(tableDeclarations))
		{
			//cerr << "Instruction incorrecte : " << *instruction << endl;
			resultat = false;
		}
	}
	for(auto & declaration : tableDeclarations)
	{
		if(!declaration.second->EstUtilise())
		{
			cerr << "La " << (declaration.second->EstAffectable() ? "variable" : "constante");
			cerr << " \"" << declaration.second->GetId() << "\" n'est pas utilisée." << endl;
			resultat = false;
		}
	}
	return resultat;	
}

void Programme::Simplifier ( )
{
	for(Instruction * instruction : listeInstructions)
	{
		instruction->Simplifier(tableDeclarations);
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
