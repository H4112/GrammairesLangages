/*************************************************************************
                           Identifiant  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 18:29:02
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Identifiant> (fichier Identifiant.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

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
Identifiant::Identifiant ( const Identifiant & unIdentifiant ) 
	: Symbole(unIdentifiant)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Identifiant>" << endl;
#endif
} //----- Fin de Identifiant (constructeur de copie)


Identifiant::Identifiant ( ) 
	: Symbole("nom", ID, true)
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
