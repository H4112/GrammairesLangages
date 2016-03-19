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
    bool Verifier ( map < string, Declaration * > & tableDeclarations );
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ExpressionBinaire ( const ExpressionBinaire & unExpressionBinaire );

    ExpressionBinaire ( );
    //Interdit

    ExpressionBinaire ( Expression * gauche, Expression * droite, int type ); 

    virtual ~ExpressionBinaire ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées
    void simplifierGaucheDroite ( map < string, Declaration * > & tableDeclarations );
private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés
	Expression * expGauche;
	Expression * expDroite;

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <ExpressionBinaire>

#endif // EXPRESSIONBINAIRE_H
