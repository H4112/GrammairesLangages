/*************************************************************************
                           Expression  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Expression> (fichier Expression.h) ------
#if ! defined ( EXPRESSION_H )
#define EXPRESSION_H

//--------------------------------------------------- Interfaces utilisées
#include <map>
#include "Symbole.h"
#include "../Declaration.h"

//------------------------------------------------------------- Constantes 
const int EXPR_ID = 1;
const int EXPR_VAL = 2;
const int EXPR_PAR = 3;
const int EXPR_MULT = 4;
const int EXPR_ADD = 5;
const int EXPR_SOUS = 6;
const int EXPR_DIV = 7;

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Expression>
// Définit le symbole Expression manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class Expression : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	virtual int Evaluer( map < string, Declaration * > & tableDeclarations ) = 0;
    // Mode d'emploi : 
	//	Calcule la valeur de l'expression.
    virtual void Simplifier( map < string, Declaration * > & tableDeclarations ) = 0;
    // Mode d'emploi : simplifie l'instruction en propageant les
    //     constantes, supprimant les éléments neutres, etc.
	
	int GetType ( );
	// Mode d'emploi :
	//	Permet de connaître le type de l'expression

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Expression ( const Expression & unExpression );

    Expression ( int type ); 

    virtual ~Expression ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
	int typeExpression;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Expression>

#endif // EXPRESSION_H
