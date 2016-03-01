/*************************************************************************
                           PartieDeclarative  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <PartieDeclarative> (fichier PartieDeclarative.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "PartieDeclarative.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
PartieDeclarative::PartieDeclarative ( const PartieDeclarative & unPartieDeclarative )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <PartieDeclarative>" << endl;
#endif
} //----- Fin de PartieDeclarative (constructeur de copie)


PartieDeclarative::PartieDeclarative ( ) : Symbole("RIEN", PD, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <PartieDeclarative>" << endl;
#endif
} //----- Fin de PartieDeclarative


PartieDeclarative::~PartieDeclarative ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <PartieDeclarative>" << endl;
#endif
} //----- Fin de ~PartieDeclarative


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
