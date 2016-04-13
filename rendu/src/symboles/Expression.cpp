/*************************************************************************
                           Expression  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Expression> (fichier Expression.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Expression.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
int Expression::GetType ( )
{
    return typeExpression;
}

void Expression::SetIdent ( int id )
{
    if(id == E || id == T || id == F)
    {
        ident = id;
    }
    else
    {
        cerr << "Type incorrect " << id << endl;
    }
}

//------------------------------------------------- Surcharge d'opérateurs
ostream & operator << ( ostream & out,
        const Expression & expression )
{
    expression.Afficher(out);
    return out;
}

//-------------------------------------------- Constructeurs - destructeur
Expression::Expression ( int type ) 
    : Symbole ( "", E, false ), typeExpression ( type )
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

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
