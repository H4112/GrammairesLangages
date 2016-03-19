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
#include "symboles/Expression.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
int ExpressionMultiplication::Evaluer( map < string, Declaration * > & tableDeclarations )
{
	return expGauche->Evaluer(tableDeclarations) 
		 * expDroite->Evaluer(tableDeclarations);
}

Expression * ExpressionMultiplication::Simplifier( map < string, Declaration * > & tableDeclarations )
{
    ExpressionBinaire::simplifierGaucheDroite(tableDeclarations);
    if(expGauche->GetType() == EXPR_VAL && expDroite->GetType() == EXPR_VAL)
    {
        int gauche = ((ExpressionValeur *)expGauche)->GetValeur();
        int droite = ((ExpressionValeur *)expDroite)->GetValeur();
        return new ExpressionValeur(gauche * droite);
    }
    else
    {
        return this;
    }
}

void ExpressionMultiplication::Print ( ostream & out ) const
{
    out << *expGauche << " * " << *expDroite;
}


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
	:	ExpressionBinaire ( gauche, droite, EXPR_MULT )
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
