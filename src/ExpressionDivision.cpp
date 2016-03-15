/*************************************************************************
                           ExpressionDivision  -  description
                             -------------------
    début                : 15/03/2016 09:59:17
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---- Réalisation de la classe <ExpressionDivision> (fichier ExpressionDivision.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "ExpressionDivision.h"
#include "symboles/Expression.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
int ExpressionDivision::Evaluer( map < string, Declaration * > & tableDeclarations )
{
	return expGauche->Evaluer(tableDeclarations) 
		 / expDroite->Evaluer(tableDeclarations);
}

void ExpressionDivision::Simplifier( map < string, Declaration * > & tableDeclarations )
{
	//TODO
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ExpressionDivision::ExpressionDivision ( const ExpressionDivision & unExpressionDivision )
	: ExpressionBinaire ( unExpressionDivision )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ExpressionDivision>" << endl;
#endif
} //----- Fin de ExpressionDivision (constructeur de copie)


ExpressionDivision::ExpressionDivision ( Expression * gauche, Expression * droite )
	: ExpressionBinaire ( gauche, droite, EXPR_DIV )
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpressionDivision>" << endl;
#endif
} //----- Fin de ExpressionDivision


ExpressionDivision::~ExpressionDivision ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ExpressionDivision>" << endl;
#endif
} //----- Fin de ~ExpressionDivision


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
