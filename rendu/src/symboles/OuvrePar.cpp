/*************************************************************************
                           OuvrePar  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <OuvrePar> (fichier OuvrePar.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "OuvrePar.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
OuvrePar::OuvrePar ( ) 
    : Symbole ( "(", OUVREPAR, true )
{
#ifdef MAP
    cout << "Appel au constructeur de <OuvrePar>" << endl;
#endif
} //----- Fin de OuvrePar


OuvrePar::~OuvrePar ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <OuvrePar>" << endl;
#endif
} //----- Fin de ~OuvrePar


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
