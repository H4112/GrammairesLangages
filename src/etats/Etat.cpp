/*************************************************************************
                           Etat  -  Etat de l'automate
                             -------------------
    début                : 1 mars 2016 17:48:07
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Etat> (fichier Etat.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Etat.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Symbole * Etat::Recuperation ( )
{
	return NULL;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
Symbole * Etat::Recuperation ( Symbole * symb )
{
	return Recuperation();
}
#pragma GCC diagnostic pop

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
Etat::~Etat ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat>" << endl;
#endif
} //----- Fin de ~Etat

Etat::Etat ( const Etat & unEtat )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat>" << endl;
#endif
} //----- Fin de Etat (constructeur de copie)

Etat::Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat>" << endl;
#endif
} //----- Fin de Etat


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées


