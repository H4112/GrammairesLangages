/*************************************************************************
                           Valeur  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Valeur> (fichier Valeur.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Valeur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Valeur::Valeur ( const Valeur & unValeur ) 
	: Symbole(unValeur)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Valeur>" << endl;
#endif
} //----- Fin de Valeur (constructeur de copie)


Valeur::Valeur ( int val ) 
	: Symbole(to_string(val), VAL, true), valeur(val)
{
#ifdef MAP
    cout << "Appel au constructeur de <Valeur>" << endl;
#endif
} //----- Fin de Valeur


Valeur::~Valeur ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Valeur>" << endl;
#endif
} //----- Fin de ~Valeur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
