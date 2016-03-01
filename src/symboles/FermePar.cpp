/*************************************************************************
                           FermePar  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <FermePar> (fichier FermePar.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "FermePar.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
FermePar::FermePar ( const FermePar & unFermePar )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <FermePar>" << endl;
#endif
} //----- Fin de FermePar (constructeur de copie)


FermePar::FermePar ( ) : Symbole(")", FERMEPAR, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <FermePar>" << endl;
#endif
} //----- Fin de FermePar


FermePar::~FermePar ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <FermePar>" << endl;
#endif
} //----- Fin de ~FermePar


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
