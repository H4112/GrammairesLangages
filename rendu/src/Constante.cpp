/*************************************************************************
                           Constante  -  description
                             -------------------
    début                : 8 mars 2016 11:32:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Constante> (fichier Constante.h) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <string>

using namespace std;

//------------------------------------------------------ Include personnel
#include "Constante.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
bool Constante::EstAffectable ( ) const
{
    return false;
}

bool Constante::EstAffecte ( ) const
{
    return true;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Constante::Constante ( string id, int val ) : Declaration(id, val)
{
#ifdef MAP
    cout << "Appel au constructeur de <Constante>" << endl;
#endif
} //----- Fin de Constante


Constante::~Constante ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Constante>" << endl;
#endif
} //----- Fin de ~Constante


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
