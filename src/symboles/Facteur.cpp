/*************************************************************************
                           Facteur  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Facteur> (fichier Facteur.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Facteur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Facteur::Facteur ( const Facteur & unFacteur )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Facteur>" << endl;
#endif
} //----- Fin de Facteur (constructeur de copie)


Facteur::Facteur ( ) : Symbole("RIEN", F, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <Facteur>" << endl;
#endif
} //----- Fin de Facteur


Facteur::~Facteur ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Facteur>" << endl;
#endif
} //----- Fin de ~Facteur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
