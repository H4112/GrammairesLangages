/*************************************************************************
                           Affecter  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Affecter> (fichier Affecter.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Affecter.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Affecter::Affecter ( const Affecter & unAffecter ) 
	: Symbole(unAffecter)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Affecter>" << endl;
#endif
} //----- Fin de Affecter (constructeur de copie)


Affecter::Affecter ( ) 
	: Symbole(":=", AFFECTATION, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Affecter>" << endl;
#endif
} //----- Fin de Affecter


Affecter::~Affecter ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Affecter>" << endl;
#endif
} //----- Fin de ~Affecter


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
