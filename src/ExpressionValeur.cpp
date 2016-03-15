/*************************************************************************
                           ExpressionValeur  -  description
                             -------------------
    début                : 15/03/2016 11:56:06
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---- Réalisation de la classe <ExpressionValeur> (fichier ExpressionValeur.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "ExpressionValeur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
int ExpressionValeur::Evaluer( map < string, Declaration * > & tableDeclarations )
{
	return valeur;
}
    
void ExpressionValeur::Simplifier( map < string, Declaration * > & tableDeclarations )
{

}
#pragma GCC diagnostic pop

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ExpressionValeur::ExpressionValeur ( const ExpressionValeur & unExpressionValeur )
	: Expression ( unExpressionValeur )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ExpressionValeur>" << endl;
#endif
} //----- Fin de ExpressionValeur (constructeur de copie)


ExpressionValeur::ExpressionValeur ( int val )
	: Expression ( EXPR_VAL ), valeur ( val )
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpressionValeur>" << endl;
#endif
} //----- Fin de ExpressionValeur


ExpressionValeur::~ExpressionValeur ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ExpressionValeur>" << endl;
#endif
} //----- Fin de ~ExpressionValeur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées