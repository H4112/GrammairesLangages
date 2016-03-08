/*************************************************************************
                           Variable  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Variable> (fichier Variable.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Variable.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Variable::Variable ( const Variable & unVariable ) 
	: Symbole(unVariable)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Variable>" << endl;
#endif
} //----- Fin de Variable (constructeur de copie)


Variable::Variable ( ) 
	: Symbole("var", VAR, true)
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
