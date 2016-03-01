/*************************************************************************
                           Egal  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Egal> (fichier Egal.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Egal.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Egal::Egal ( const Egal & unEgal )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Egal>" << endl;
#endif
} //----- Fin de Egal (constructeur de copie)


Egal::Egal ( ) : Symbole("=", EGAL, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Egal>" << endl;
#endif
} //----- Fin de Egal


Egal::~Egal ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Egal>" << endl;
#endif
} //----- Fin de ~Egal


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
