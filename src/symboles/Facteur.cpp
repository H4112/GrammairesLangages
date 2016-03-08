/*************************************************************************
                           Facteur  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Facteur> (fichier Facteur.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

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
	: Symbole(unFacteur)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Facteur>" << endl;
#endif
} //----- Fin de Facteur (constructeur de copie)


Facteur::Facteur ( ) 
	: Symbole("RIEN", F, false)
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
