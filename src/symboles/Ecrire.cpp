/*************************************************************************
                           Ecrire  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:38:26
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Ecrire> (fichier Ecrire.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Ecrire.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Ecrire::Ecrire ( const Ecrire & unEcrire )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Ecrire>" << endl;
#endif
} //----- Fin de Ecrire (constructeur de copie)


Ecrire::Ecrire ( ) : Symbole("ecrire", ECRIRE, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Ecrire>" << endl;
#endif
} //----- Fin de Ecrire


Ecrire::~Ecrire ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Ecrire>" << endl;
#endif
} //----- Fin de ~Ecrire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
