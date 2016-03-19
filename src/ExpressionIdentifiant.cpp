/*************************************************************************
                           ExpressionIdentifiant  -  description
                             -------------------
    début                : 15/03/2016 12:01:49
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---- Réalisation de la classe <ExpressionIdentifiant> (fichier ExpressionIdentifiant.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "ExpressionIdentifiant.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
int ExpressionIdentifiant::Evaluer( map < string, Declaration * > & tableDeclarations )
{
	return tableDeclarations[id]->GetValeur();
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
Expression * ExpressionIdentifiant::Simplifier( map < string, Declaration * > & tableDeclarations )
{
    // Si c'est une constante, la remplacer par sa valeur
    if(!tableDeclarations[id]->EstAffectable())
    {
        return new ExpressionValeur(tableDeclarations[id]->GetValeur());
    }
    else
    {
        return this;
    }
}
#pragma GCC diagnostic pop

void ExpressionIdentifiant::Print ( ostream & out ) const
{
    out << id;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ExpressionIdentifiant::ExpressionIdentifiant ( const ExpressionIdentifiant & unExpressionIdentifiant )
	: Expression ( unExpressionIdentifiant )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ExpressionIdentifiant>" << endl;
#endif
} //----- Fin de ExpressionIdentifiant (constructeur de copie)


ExpressionIdentifiant::ExpressionIdentifiant ( string ident )
	: Expression (EXPR_ID ), id(ident)
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpressionIdentifiant>" << endl;
#endif
} //----- Fin de ExpressionIdentifiant


ExpressionIdentifiant::~ExpressionIdentifiant ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ExpressionIdentifiant>" << endl;
#endif
} //----- Fin de ~ExpressionIdentifiant


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
