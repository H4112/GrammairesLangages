/*************************************************************************
                           Variable  -  Déclaration d'une variable
                             -------------------
    début                : 8 mars 2016 11:32:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Variable> (fichier Variable.h) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <string>

using namespace std;

//------------------------------------------------------ Include personnel
#include "Variable.h"

//------------------------------------------------------------- Variables

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
bool Variable::EstAffectable ( ) const
{
	return true;
}

bool Variable::EstAffecte ( ) const
{
	return affecte;
}

void Variable::AffecterValeur ( int newValeur )
{
	valeur = newValeur;
	affecte = true;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Variable::Variable ( const Variable & uneVariable )
	: Declaration(uneVariable), affecte(uneVariable.affecte)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Variable>" << endl;
#endif
} //----- Fin de Variable (constructeur de copie)


Variable::Variable ( string id ) : Declaration(id, 0), affecte(false)
{
#ifdef MAP
    cout << "Appel au constructeur de <Variable>" << endl;
#endif
} //----- Fin de Variable


Variable::~Variable ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Variable>" << endl;
#endif
} //----- Fin de ~Variable


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
