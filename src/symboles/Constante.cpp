/*************************************************************************
                           Constante  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Constante> (fichier Constante.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Constante.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Constante::Constante ( const Constante & unConstante )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Constante>" << endl;
#endif
} //----- Fin de Constante (constructeur de copie)


Constante::Constante ( ) : Symbole("const", CONST, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Constante>" << endl;
#endif
} //----- Fin de Constante


Constante::~Constante ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Constante>" << endl;
#endif
} //----- Fin de ~Constante


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
