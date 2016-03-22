/*************************************************************************
                           Symbole  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Symbole> (fichier Symbole.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Symbole.h"
#include <string>

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
string Symbole::GetNom()
{
    return nom;
}

bool Symbole::EstTerminal()
{
    return terminal;
}

void Symbole::SetPosition ( int numL, int numC )
{
    numLine = numL;
    numChar = numC;
}

int Symbole::GetLigne ( )
{
    return numLine;
}

int Symbole::GetChar ( )
{
    return numChar;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Symbole::Symbole ( const Symbole & unSymbole ) :
    ident(unSymbole.ident), nom(unSymbole.nom), terminal(unSymbole.terminal),
    numLine(unSymbole.numLine), numChar(unSymbole.numChar)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Symbole>" << endl;
#endif
} //----- Fin de Symbole (constructeur de copie)


Symbole::Symbole(string nomTemp, int identTemp, bool terminalTemp)
    : ident(identTemp), nom(nomTemp), terminal(terminalTemp),
    numLine(0), numChar(0)
{
#ifdef MAP
    cout << "Appel au constructeur de <Symbole>" << endl;
#endif
} //----- Fin de Symbole


Symbole::~Symbole ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Symbole>" << endl;
#endif
} //----- Fin de ~Symbole




//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
