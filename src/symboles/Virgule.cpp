/*************************************************************************
                           Virgule  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 18:29:02
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Virgule> (fichier Virgule.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Virgule.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Virgule::Virgule ( const Virgule & unVirgule ) 
	: Symbole(unVirgule)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Virgule>" << endl;
#endif
} //----- Fin de Virgule (constructeur de copie)


Virgule::Virgule ( ) 
	: Symbole("METTEZ UNE VIRGULE ICI", VIRGULE, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Virgule>" << endl;
#endif
} //----- Fin de Virgule


Virgule::~Virgule ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Virgule>" << endl;
#endif
} //----- Fin de ~Virgule


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
