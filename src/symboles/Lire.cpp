/*************************************************************************
                           Lire  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Lire> (fichier Lire.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Lire.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Lire::Lire ( const Lire & unLire ) 
    : Symbole(unLire)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Lire>" << endl;
#endif
} //----- Fin de Lire (constructeur de copie)


Lire::Lire ( ) 
    : Symbole("lire", LIRE, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Lire>" << endl;
#endif
} //----- Fin de Lire


Lire::~Lire ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Lire>" << endl;
#endif
} //----- Fin de ~Lire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
