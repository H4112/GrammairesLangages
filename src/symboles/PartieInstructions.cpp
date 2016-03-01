/*************************************************************************
                           PartieInstructions  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <PartieInstructions> (fichier PartieInstructions.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

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

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
