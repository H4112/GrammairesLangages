/*************************************************************************
                           Constante  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:38:26
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Constante> (fichier Constante.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Constante.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Constante::Constante ( const Constante & unConstante )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Constante>" << endl;
#endif
} //----- Fin de Constante (constructeur de copie)


Constante::Constante ( ) : Symbole("const", CONST, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Constante>" << endl;
#endif
} //----- Fin de Constante


Constante::~Constante ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Constante>" << endl;
#endif
} //----- Fin de ~Constante


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
