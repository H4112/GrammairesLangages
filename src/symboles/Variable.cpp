/*************************************************************************
                           Variable  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Variable> (fichier Variable.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Variable.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Variable::Variable ( const Variable & unVariable )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Variable>" << endl;
#endif
} //----- Fin de Variable (constructeur de copie)


Variable::Variable ( ) : Symbole("var", VAR, true)
{
#ifdef MAP
    cout << "Appel au constructeur de <Variable>" << endl;
#endif
} //----- Fin de Variable


Variable::~Variable ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Variable>" << endl;
#endif
} //----- Fin de ~Variable


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
