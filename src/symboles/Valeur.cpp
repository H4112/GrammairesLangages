/*************************************************************************
                           Valeur  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:38:26
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Valeur> (fichier Valeur.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

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
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Valeur>" << endl;
#endif
} //----- Fin de Valeur (constructeur de copie)


Valeur::Valeur ( ) : Symbole("nom", VAL, true)
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
