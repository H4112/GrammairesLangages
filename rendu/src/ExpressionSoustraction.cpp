/*************************************************************************
                 ExpressionSoustraction  -  Soustraction de 2 termes
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

void ExpressionSoustraction::Afficher ( ostream & out ) const
{
    out << *expGauche << " - " << *expDroite;
}


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ExpressionSoustraction::ExpressionSoustraction ( Expression * gauche, Expression * droite )
     : ExpressionBinaire ( gauche, droite, EXPR_SOUS )
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpressionSoustraction>" << endl;
#endif
} //----- Fin de ExpressionSoustraction


ExpressionSoustraction::~ExpressionSoustraction ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <ExpressionSoustraction>" << endl;
#endif
} //----- Fin de ~ExpressionSoustraction


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
