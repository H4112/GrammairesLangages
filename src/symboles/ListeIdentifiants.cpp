/*************************************************************************
                           ListeIdentifiants  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <ListeIdentifiants> (fichier ListeIdentifiants.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ListeIdentifiants.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ListeIdentifiants::ListeIdentifiants ( const ListeIdentifiants & unListeIdentifiants )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ListeIdentifiants>" << endl;
#endif
} //----- Fin de ListeIdentifiants (constructeur de copie)


ListeIdentifiants::ListeIdentifiants ( ) : Symbole("RIEN", LID, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <ListeIdentifiants>" << endl;
#endif
} //----- Fin de ListeIdentifiants


ListeIdentifiants::~ListeIdentifiants ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <ListeIdentifiants>" << endl;
#endif
} //----- Fin de ~ListeIdentifiants


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
