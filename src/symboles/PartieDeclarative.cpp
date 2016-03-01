/*************************************************************************
                           PartieDeclarative  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <PartieDeclarative> (fichier PartieDeclarative.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "PartieDeclarative.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
PartieDeclarative::PartieDeclarative ( const PartieDeclarative & unPartieDeclarative )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <PartieDeclarative>" << endl;
#endif
} //----- Fin de PartieDeclarative (constructeur de copie)


PartieDeclarative::PartieDeclarative ( ) : Symbole("RIEN", PD, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <PartieDeclarative>" << endl;
#endif
} //----- Fin de PartieDeclarative


PartieDeclarative::~PartieDeclarative ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <PartieDeclarative>" << endl;
#endif
} //----- Fin de ~PartieDeclarative


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
