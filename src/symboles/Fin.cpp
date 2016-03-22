/*************************************************************************
                           Fin  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Fin> (fichier Fin.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Fin.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Fin::Fin ( const Fin & unFin ) 
    : Symbole(unFin)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Fin>" << endl;
#endif
} //----- Fin de Fin (constructeur de copie)


Fin::Fin ( ) 
    : Symbole("", FIN, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Fin>" << endl;
#endif
} //----- Fin de Fin


Fin::~Fin ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Fin>" << endl;
#endif
} //----- Fin de ~Fin


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
