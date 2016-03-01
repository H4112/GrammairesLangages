/*************************************************************************
                           Ecrire  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Ecrire> (fichier Ecrire.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Ecrire.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Ecrire::Ecrire ( const Ecrire & unEcrire )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Ecrire>" << endl;
#endif
} //----- Fin de Ecrire (constructeur de copie)


Ecrire::Ecrire ( ) : Symbole("ecrire", ECRIRE, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Ecrire>" << endl;
#endif
} //----- Fin de Ecrire


Ecrire::~Ecrire ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Ecrire>" << endl;
#endif
} //----- Fin de ~Ecrire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
