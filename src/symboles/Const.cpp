/*************************************************************************
                           Const -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Const> (fichier Const.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Const.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Const::Const ( const Const & unConst ) 
	: Symbole(unConst)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Const>" << endl;
#endif
} //----- Fin de Const (constructeur de copie)


Const::Const ( ) 
	: Symbole("const", CONST, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Const>" << endl;
#endif
} //----- Fin de Const


Const::~Const ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Const>" << endl;
#endif
} //----- Fin de ~Const


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
