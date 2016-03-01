/*************************************************************************
                           Programme  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Programme> (fichier Programme.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Programme.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Programme::Programme ( const Programme & unProgramme )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Programme>" << endl;
#endif
} //----- Fin de Programme (constructeur de copie)


Programme::Programme ( ) : Symbole("RIEN", PROG, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <Programme>" << endl;
#endif
} //----- Fin de Programme


Programme::~Programme ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Programme>" << endl;
#endif
} //----- Fin de ~Programme


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
