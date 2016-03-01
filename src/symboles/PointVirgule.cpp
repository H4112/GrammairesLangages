/*************************************************************************
                           PointVirgule  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 18:29:02
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <PointVirgule> (fichier PointVirgule.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "PointVirgule.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
PointVirgule::PointVirgule ( const PointVirgule & unPointVirgule ) 
	: Symbole(unPointVirgule)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <PointVirgule>" << endl;
#endif
} //----- Fin de PointVirgule (constructeur de copie)


PointVirgule::PointVirgule ( ) 
	: Symbole(";", POINT_VIRGULE, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <PointVirgule>" << endl;
#endif
} //----- Fin de PointVirgule


PointVirgule::~PointVirgule ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <PointVirgule>" << endl;
#endif
} //----- Fin de ~PointVirgule


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
