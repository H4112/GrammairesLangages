/*************************************************************************
                           FermePar  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:38:26
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <FermePar> (fichier FermePar.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

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
FermePar::FermePar ( const FermePar & unFermePar )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <FermePar>" << endl;
#endif
} //----- Fin de FermePar (constructeur de copie)


FermePar::FermePar ( ) : Symbole(")", FERMEPAR, true)
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
