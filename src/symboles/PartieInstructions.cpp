/*************************************************************************
                           PartieInstructions  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <PartieInstructions> (fichier PartieInstructions.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "PartieInstructions.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
PartieInstructions::PartieInstructions ( const PartieInstructions & unPartieInstructions ) 
	: Symbole(unPartieInstructions)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <PartieInstructions>" << endl;
#endif
} //----- Fin de PartieInstructions (constructeur de copie)


PartieInstructions::PartieInstructions ( ) 
	: Symbole("RIEN", PI, false)
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

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
