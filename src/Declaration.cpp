/*************************************************************************
                           Declaration  -  Déclaration d'une variable/constante
                             -------------------
    début                : 8 mars 2016 11:21:34
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
bool Declaration::EstUtilise ( )
{
	return utilise;
}

string Declaration::GetId ( )
{
	return id;
}

int Declaration::GetValeur ( )
{
	utilise = true;
	return valeur;
}

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
Declaration::Declaration ( string unId, int uneValeur )
	: id ( unId ), valeur ( uneValeur )
{
#ifdef MAP
    cout << "Appel au constructeur de <Declaration>" << endl;
#endif
} //----- Fin de Declaration

Declaration::Declaration ( const Declaration & unDeclaration )
	: id ( unDeclaration.id ), valeur ( unDeclaration.valeur )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Declaration>" << endl;
#endif
} //----- Fin de Declaration (constructeur de copie)

Declaration::~Declaration ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Declaration>" << endl;
#endif
} //----- Fin de ~Declaration

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées


