/*************************************************************************
                           Var  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Var> (fichier Var.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Var.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Var::Var ( const Var & unVar ) 
	: Symbole(unVar)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Var>" << endl;
#endif
} //----- Fin de Var (constructeur de copie)


Var::Var ( ) 
	: Symbole("var", VAR, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Var>" << endl;
#endif
} //----- Fin de Var


Var::~Var ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Var>" << endl;
#endif
} //----- Fin de ~Var


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées