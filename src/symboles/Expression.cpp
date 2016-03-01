/*************************************************************************
                           Expression  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Expression> (fichier Expression.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Expression.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Expression::Expression ( const Expression & unExpression )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Expression>" << endl;
#endif
} //----- Fin de Expression (constructeur de copie)


Expression::Expression ( ) : Symbole("RIEN", E, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <Expression>" << endl;
#endif
} //----- Fin de Expression


Expression::~Expression ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Expression>" << endl;
#endif
} //----- Fin de ~Expression


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
