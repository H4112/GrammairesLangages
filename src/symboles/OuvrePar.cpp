/*************************************************************************
                           OuvrePar  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <OuvrePar> (fichier OuvrePar.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "OuvrePar.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
OuvrePar::OuvrePar ( const OuvrePar & unOuvrePar )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <OuvrePar>" << endl;
#endif
} //----- Fin de OuvrePar (constructeur de copie)


OuvrePar::OuvrePar ( ) : Symbole("(", OUVREPAR, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <OuvrePar>" << endl;
#endif
} //----- Fin de OuvrePar


OuvrePar::~OuvrePar ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <OuvrePar>" << endl;
#endif
} //----- Fin de ~OuvrePar


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
