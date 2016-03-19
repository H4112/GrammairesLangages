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
#include "symboles/Expression.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
int ExpressionAddition::Evaluer( map < string, Declaration * > & tableDeclarations )
{
	return expGauche->Evaluer(tableDeclarations) 
		 + expDroite->Evaluer(tableDeclarations);
}

Expression * ExpressionAddition::Simplifier( map < string, Declaration * > & tableDeclarations )
{
    ExpressionBinaire::simplifierGaucheDroite(tableDeclarations);
    if(expGauche->GetType() == EXPR_VAL && expDroite->GetType() == EXPR_VAL)
    {
        int gauche = ((ExpressionValeur *)expGauche)->GetValeur();
        int droite = ((ExpressionValeur *)expDroite)->GetValeur();
        return new ExpressionValeur(gauche + droite);
    }
    else if(expGauche->GetType() == EXPR_VAL && ((ExpressionValeur *)expGauche)->GetValeur() == 0)
    {
        Expression * e = expDroite;
        expDroite = 0;
        return e;
    }
    else if(expDroite->GetType() == EXPR_VAL && ((ExpressionValeur *)expDroite)->GetValeur() == 0)
    {
        Expression * e = expGauche;
        expGauche = 0;
        return e;
    }
    else
    {
        return this;
    }
}

void ExpressionAddition::Afficher ( ostream & out ) const
{
    out << *expGauche << " + " << *expDroite;
}


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
	: ExpressionBinaire ( gauche, droite, EXPR_ADD )
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
