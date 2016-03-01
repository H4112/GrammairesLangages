/*************************************************************************
                           Affectation  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:38:26
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Affectation> (fichier Affectation.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Affectation.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Affectation::Affectation ( const Affectation & unAffectation )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Affectation>" << endl;
#endif
} //----- Fin de Affectation (constructeur de copie)


Affectation::Affectation ( ) : Symbole(":=", AFFECTATION, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Affectation>" << endl;
#endif
} //----- Fin de Affectation


Affectation::~Affectation ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Affectation>" << endl;
#endif
} //----- Fin de ~Affectation


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
