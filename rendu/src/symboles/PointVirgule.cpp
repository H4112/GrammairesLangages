/*************************************************************************
                      PointVirgule  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <PointVirgule> (fichier PointVirgule.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

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
PointVirgule::PointVirgule ( ) 
    : Symbole ( ";", POINT_VIRGULE, true )
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
