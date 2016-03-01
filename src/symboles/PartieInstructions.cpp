/*************************************************************************
                           PartieInstructions  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <PartieInstructions> (fichier PartieInstructions.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "PartieInstructions.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
PartieInstructions::PartieInstructions ( const PartieInstructions & unPartieInstructions )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <PartieInstructions>" << endl;
#endif
} //----- Fin de PartieInstructions (constructeur de copie)


PartieInstructions::PartieInstructions ( ) : Symbole("RIEN", PI, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <PartieInstructions>" << endl;
#endif
} //----- Fin de PartieInstructions


PartieInstructions::~PartieInstructions ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <PartieInstructions>" << endl;
#endif
} //----- Fin de ~PartieInstructions


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
