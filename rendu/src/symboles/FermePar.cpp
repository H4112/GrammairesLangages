/*************************************************************************
                           FermePar  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <FermePar> (fichier FermePar.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "FermePar.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
FermePar::FermePar ( ) : Symbole ( ")", FERMEPAR, true )
{
#ifdef MAP
    cout << "Appel au constructeur de <FermePar>" << endl;
#endif
} //----- Fin de FermePar


FermePar::~FermePar ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <FermePar>" << endl;
#endif
} //----- Fin de ~FermePar


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
