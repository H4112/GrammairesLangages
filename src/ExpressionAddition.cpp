/*************************************************************************
                           ExpressionAddition  -  description
                             -------------------
    début                : 15/03/2016 09:59:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---- Réalisation de la classe <ExpressionAddition> (fichier ExpressionAddition.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "ExpressionAddition.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
// type ExpressionAddition::Méthode ( liste de paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ExpressionAddition::ExpressionAddition ( const ExpressionAddition & unExpressionAddition )
	: ExpressionBinaire ( unExpressionAddition )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ExpressionAddition>" << endl;
#endif
} //----- Fin de ExpressionAddition (constructeur de copie)


ExpressionAddition::ExpressionAddition ( Expression * gauche, Expression * droite )
	: ExpressionBinaire ( gauche, droite )
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpressionAddition>" << endl;
#endif
} //----- Fin de ExpressionAddition


ExpressionAddition::~ExpressionAddition ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ExpressionAddition>" << endl;
#endif
} //----- Fin de ~ExpressionAddition


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
