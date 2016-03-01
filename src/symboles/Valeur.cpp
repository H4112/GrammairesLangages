/*************************************************************************
                           Valeur  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Valeur> (fichier Valeur.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Valeur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Valeur::Valeur ( const Valeur & unValeur )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Valeur>" << endl;
#endif
} //----- Fin de Valeur (constructeur de copie)


Valeur::Valeur ( ) : Symbole("nom", VAL, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Valeur>" << endl;
#endif
} //----- Fin de Valeur


Valeur::~Valeur ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Valeur>" << endl;
#endif
} //----- Fin de ~Valeur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
