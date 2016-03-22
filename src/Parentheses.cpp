/*************************************************************************
                       Parentheses  -  Expression parenthésée
                             -------------------
    début                : 15/03/2016 09:29:28
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---- Réalisation de la classe <Parentheses> (fichier Parentheses.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Parentheses.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
int Parentheses::Evaluer( map < string, Declaration * > & tableDeclarations )
{
    return expression->Evaluer(tableDeclarations);
}

Expression * Parentheses::Simplifier( map < string, Declaration * > & tableDeclarations )
{
    Expression * e = expression->Simplifier(tableDeclarations);
    if(expression != e)
    {
        delete expression;
        expression = e;
    }
    if(expression->GetType() == EXPR_VAL)
    {
        Expression * expr = expression;
        expression = 0;
        return expr;
    }
    return this;
}

void Parentheses::Afficher ( ostream & out ) const
{
    out << "(" << *expression << ")";
}

bool Parentheses::Verifier ( map < string, Declaration * > & tableDeclarations )
{
    return expression->Verifier(tableDeclarations);
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Parentheses::Parentheses ( Expression * exp )
    : Expression ( EXPR_PAR ), expression( exp )
{
#ifdef MAP
    cout << "Appel au constructeur de <Parentheses>" << endl;
#endif
} //----- Fin de Parentheses


Parentheses::~Parentheses ( )
{
    delete expression;
#ifdef MAP
    cout << "Appel au destructeur de <Parentheses>" << endl;
#endif
} //----- Fin de ~Parentheses


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
