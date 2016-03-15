/*************************************************************************
                           ExpressionBinaire  -  Expression arithmétique
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ExpressionBinaire> (fichier ExpressionBinaire.h) ------
#if ! defined ( EXPRESSIONBINAIRE_H )
#define EXPRESSIONBINAIRE_H

//--------------------------------------------------- Interfaces utilisées
#include "symboles/Expression.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ExpressionBinaire>
// Définit une expression arithmétqique composée d'un opérateur binaire.
//
//------------------------------------------------------------------------ 

class ExpressionBinaire : public Expression
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ExpressionBinaire ( const ExpressionBinaire & unExpressionBinaire );

    ExpressionBinaire ( );
    //Interdit

    ExpressionBinaire ( Expression * gauche, Expression * droite ); 

    virtual ~ExpressionBinaire ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées
	Expression * expGauche;
	Expression * expDroite;
protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <ExpressionBinaire>

#endif // EXPRESSIONBINAIRE_H
