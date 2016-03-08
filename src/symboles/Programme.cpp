/*************************************************************************
                           Programme  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Programme> (fichier Programme.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Programme.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Programme::Programme ( const Programme & unProgramme ) 
	: Symbole(unProgramme)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Programme>" << endl;
#endif
} //----- Fin de Programme (constructeur de copie)


Programme::Programme ( ) 
	: Symbole("RIEN", PROG, false)
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

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
