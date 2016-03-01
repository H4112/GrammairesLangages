/*************************************************************************
                           Identifiant  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Identifiant> (fichier Identifiant.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Identifiant.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Identifiant::Identifiant ( const Identifiant & unIdentifiant )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Identifiant>" << endl;
#endif
} //----- Fin de Identifiant (constructeur de copie)


Identifiant::Identifiant ( ) : Symbole("nom", ID, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Identifiant>" << endl;
#endif
} //----- Fin de Identifiant


Identifiant::~Identifiant ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Identifiant>" << endl;
#endif
} //----- Fin de ~Identifiant


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
