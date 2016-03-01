/*************************************************************************
                           Expression  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 18:29:03
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Expression> (fichier Expression.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Expression.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Expression::Expression ( const Expression & unExpression ) 
	: Symbole(unExpression)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Expression>" << endl;
#endif
} //----- Fin de Expression (constructeur de copie)


Expression::Expression ( ) 
	: Symbole("RIEN", E, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <Expression>" << endl;
#endif
} //----- Fin de Expression


Expression::~Expression ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Expression>" << endl;
#endif
} //----- Fin de ~Expression


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
