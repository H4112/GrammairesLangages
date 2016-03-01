/*************************************************************************
                           Virgule  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Virgule> (fichier Virgule.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Virgule.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Virgule::Virgule ( const Virgule & unVirgule )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Virgule>" << endl;
#endif
} //----- Fin de Virgule (constructeur de copie)


Virgule::Virgule ( ) : Symbole(""", VIRGULE, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Virgule>" << endl;
#endif
} //----- Fin de Virgule


Virgule::~Virgule ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Virgule>" << endl;
#endif
} //----- Fin de ~Virgule


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
