/*************************************************************************
                           Symbole  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Symbole> (fichier Symbole.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Symbole.h"
#include <string.h>

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
string getNom()
{
	return nom;
}

bool estTerminal()
{
	return terminal;
}

//------------------------------------------------- Surcharge d'opérateurs
operator int() const { return ident; }

//-------------------------------------------- Constructeurs - destructeur
Symbole ( const Symbole & unSymbole )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Symbole>" << endl;
#endif
} //----- Fin de Symbole (constructeur de copie)


Symbole(string nomTemp, int identTemp, bool terminalTemp)
{
#ifdef MAP
	nom=nomTemp;
	terminal=terminalTemp;
	ident=identTemp;
    cout << "Appel au constructeur de <Symbole>" << endl;
#endif
} //----- Fin de Symbole


~Symbole ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Symbole>" << endl;
#endif
} //----- Fin de ~Symbole




//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
