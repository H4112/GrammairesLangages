/*************************************************************************
                           Parentheses  -  description
                             -------------------
    début                : 15/03/2016 09:29:28
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---- Réalisation de la classe <Parentheses> (fichier Parentheses.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Parentheses.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
// type Parentheses::Méthode ( liste de paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Parentheses::Parentheses ( const Parentheses & unParentheses )
	: Expression(unParentheses), expression(unParentheses.expression)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Parentheses>" << endl;
#endif
} //----- Fin de Parentheses (constructeur de copie)


Parentheses::Parentheses ( Expression * exp )
	: expression(exp)
{
#ifdef MAP
    cout << "Appel au constructeur de <Parentheses>" << endl;
#endif
} //----- Fin de Parentheses


Parentheses::~Parentheses ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Parentheses>" << endl;
#endif
} //----- Fin de ~Parentheses


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
