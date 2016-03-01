/*************************************************************************
                           Automate  -  Automate de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Automate> (fichier Automate.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Automate.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Automate ( const Automate & unAutomate )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Automate>" << endl;
#endif
} //----- Fin de Automate (constructeur de copie)


Automate(":=", Automate, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Automate>" << endl;
#endif
} //----- Fin de Automate


~Automate ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Automate>" << endl;
#endif
} //----- Fin de ~Automate


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
