/*************************************************************************
                           Declaration  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Declaration> (fichier Declaration.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Declaration.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Declaration::Declaration ( const Declaration & unDeclaration )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Declaration>" << endl;
#endif
} //----- Fin de Declaration (constructeur de copie)


Declaration::Declaration ( ) : Symbole("RIEN", D, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <Declaration>" << endl;
#endif
} //----- Fin de Declaration


Declaration::~Declaration ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Declaration>" << endl;
#endif
} //----- Fin de ~Declaration


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
