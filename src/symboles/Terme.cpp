/*************************************************************************
                           Terme  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Terme> (fichier Terme.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Terme.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Terme::Terme ( const Terme & unTerme ) 
	: Symbole(unTerme)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Terme>" << endl;
#endif
} //----- Fin de Terme (constructeur de copie)


Terme::Terme ( ) 
	: Symbole("", T, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <Terme>" << endl;
#endif
} //----- Fin de Terme


Terme::~Terme ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Terme>" << endl;
#endif
} //----- Fin de ~Terme


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
