/*************************************************************************
                           Lire  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Lire> (fichier Lire.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Lire.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Lire::Lire ( const Lire & unLire )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Lire>" << endl;
#endif
} //----- Fin de Lire (constructeur de copie)


Lire::Lire ( ) : Symbole("lire", LIRE, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Lire>" << endl;
#endif
} //----- Fin de Lire


Lire::~Lire ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Lire>" << endl;
#endif
} //----- Fin de ~Lire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
