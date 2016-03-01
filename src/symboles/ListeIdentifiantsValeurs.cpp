/*************************************************************************
                           ListeIdentifiantsValeurs  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:38:26
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <ListeIdentifiantsValeurs> (fichier ListeIdentifiantsValeurs.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ListeIdentifiantsValeurs.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ListeIdentifiantsValeurs::ListeIdentifiantsValeurs ( const ListeIdentifiantsValeurs & unListeIdentifiantsValeurs )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ListeIdentifiantsValeurs>" << endl;
#endif
} //----- Fin de ListeIdentifiantsValeurs (constructeur de copie)


ListeIdentifiantsValeurs::ListeIdentifiantsValeurs ( ) : Symbole("RIEN", LIDV, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <ListeIdentifiantsValeurs>" << endl;
#endif
} //----- Fin de ListeIdentifiantsValeurs


ListeIdentifiantsValeurs::~ListeIdentifiantsValeurs ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <ListeIdentifiantsValeurs>" << endl;
#endif
} //----- Fin de ~ListeIdentifiantsValeurs


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
