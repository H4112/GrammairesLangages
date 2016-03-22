/*************************************************************************
                           ExpressionValeur  -  description
                             -------------------
    début                : 15/03/2016 11:56:06
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ExpressionValeur> (fichier ExpressionValeur.h) ------
#if ! defined ( EXPRESSIONVALEUR_H )
#define EXPRESSIONVALEUR_H

//--------------------------------------------------- Interfaces utilisées
#include "symboles/Expression.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ExpressionValeur>
//
//
//------------------------------------------------------------------------ 

class ExpressionValeur : public Expression
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    int Evaluer( map < string, Declaration * > & tableDeclarations );
    
    Expression * Simplifier( map < string, Declaration * > & tableDeclarations );

    int GetValeur ( );

    void Afficher ( ostream & out ) const;
    
    bool Verifier ( map < string, Declaration * > & tableDeclarations );

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ExpressionValeur ( const ExpressionValeur & unExpressionValeur );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ExpressionValeur ( );
    // Interdit

    ExpressionValeur ( int val );

    virtual ~ExpressionValeur ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
    int valeur;
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <ExpressionValeur>

#endif // EXPRESSIONVALEUR_H
