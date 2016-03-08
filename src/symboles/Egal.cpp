/*************************************************************************
                           Egal  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Egal> (fichier Egal.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Egal.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Egal::Egal ( const Egal & unEgal ) 
	: Symbole(unEgal)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Egal>" << endl;
#endif
} //----- Fin de Egal (constructeur de copie)


Egal::Egal ( ) 
	: Symbole("=", EGAL, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Egal>" << endl;
#endif
} //----- Fin de Egal


Egal::~Egal ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Egal>" << endl;
#endif
} //----- Fin de ~Egal


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
