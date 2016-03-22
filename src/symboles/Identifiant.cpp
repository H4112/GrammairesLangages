/*************************************************************************
                           Identifiant  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Identifiant> (fichier Identifiant.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Identifiant.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Identifiant::Identifiant ( string unId ) 
    : Symbole ( unId, ID, true ), id ( unId )
{
#ifdef MAP
    cout << "Appel au constructeur de <Identifiant>" << endl;
#endif
} //----- Fin de Identifiant


Identifiant::~Identifiant ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Identifiant>" << endl;
#endif
} //----- Fin de ~Identifiant


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
