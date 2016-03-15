/*************************************************************************
                           ExpressionMultiplication  -  description
                             -------------------
    début                : 15/03/2016 09:59:12
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---- Réalisation de la classe <ExpressionMultiplication> (fichier ExpressionMultiplication.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;
//------------------------------------------------------ Include personnel
#include "ExpressionMultiplication.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
// type ExpressionMultiplication::Méthode ( liste de paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ExpressionMultiplication::ExpressionMultiplication ( const ExpressionMultiplication & uneExpressionMultiplication )
	: ExpressionBinaire ( uneExpressionMultiplication )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ExpressionMultiplication>" << endl;
#endif
} //----- Fin de ExpressionMultiplication (constructeur de copie)


ExpressionMultiplication::ExpressionMultiplication ( Expression * gauche, Expression * droite )
	:	ExpressionBinaire ( gauche, droite )
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpressionMultiplication>" << endl;
#endif
} //----- Fin de ExpressionMultiplication


ExpressionMultiplication::~ExpressionMultiplication ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ExpressionMultiplication>" << endl;
#endif
} //----- Fin de ~ExpressionMultiplication


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
