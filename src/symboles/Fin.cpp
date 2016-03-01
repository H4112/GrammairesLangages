/*************************************************************************
                           Fin  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Fin> (fichier Fin.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Fin.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Fin::Fin ( const Fin & unFin )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Fin>" << endl;
#endif
} //----- Fin de Fin (constructeur de copie)


Fin::Fin ( ) : Symbole("RIEN", FIN, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Fin>" << endl;
#endif
} //----- Fin de Fin


Fin::~Fin ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Fin>" << endl;
#endif
} //----- Fin de ~Fin


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
