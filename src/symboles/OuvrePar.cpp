/*************************************************************************
                           OuvrePar  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <OuvrePar> (fichier OuvrePar.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "OuvrePar.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
OuvrePar::OuvrePar ( const OuvrePar & unOuvrePar )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <OuvrePar>" << endl;
#endif
} //----- Fin de OuvrePar (constructeur de copie)


OuvrePar::OuvrePar ( ) : Symbole("(", OUVREPAR, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <OuvrePar>" << endl;
#endif
} //----- Fin de OuvrePar


OuvrePar::~OuvrePar ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <OuvrePar>" << endl;
#endif
} //----- Fin de ~OuvrePar


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
