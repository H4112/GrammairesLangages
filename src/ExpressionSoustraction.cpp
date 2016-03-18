/*************************************************************************
                           ExpressionSoustraction  -  description
                             -------------------
    début                : 15/03/2016 10:04:16
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---- Réalisation de la classe <ExpressionSoustraction> (fichier ExpressionSoustraction.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "ExpressionSoustraction.h"
#include "symboles/Expression.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
int ExpressionSoustraction::Evaluer( map < string, Declaration * > & tableDeclarations )
{
	return expGauche->Evaluer(tableDeclarations) 
		 - expDroite->Evaluer(tableDeclarations);
}

Expression * ExpressionSoustraction::Simplifier( map < string, Declaration * > & tableDeclarations )
{
    ExpressionBinaire::simplifierGaucheDroite(tableDeclarations);
    if(expGauche->GetType() == EXPR_VAL && expDroite->GetType() == EXPR_VAL)
    {
        int gauche = ((ExpressionValeur *)expGauche)->GetValeur();
        int droite = ((ExpressionValeur *)expDroite)->GetValeur();
        return new ExpressionValeur(gauche - droite);
    }
    else
    {
        return this;
    }
}


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
ExpressionSoustraction::ExpressionSoustraction ( const ExpressionSoustraction & unExpressionSoustraction )
	: ExpressionBinaire ( unExpressionSoustraction )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ExpressionSoustraction>" << endl;
#endif
} //----- Fin de ExpressionSoustraction (constructeur de copie)


ExpressionSoustraction::ExpressionSoustraction ( Expression * gauche, Expression * droite )
	 : ExpressionBinaire ( gauche, droite, EXPR_SOUS )
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpressionSoustraction>" << endl;
#endif
} //----- Fin de ExpressionSoustraction


ExpressionSoustraction::~ExpressionSoustraction ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ExpressionSoustraction>" << endl;
#endif
} //----- Fin de ~ExpressionSoustraction


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
