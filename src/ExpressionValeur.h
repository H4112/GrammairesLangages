/*************************************************************************
                      ExpressionValeur  -  Valeur constante
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
// Expression possédant une valeur constante.
//
//------------------------------------------------------------------------ 

class ExpressionValeur : public Expression
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    int Evaluer( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi : 
    //     Calcule la valeur de l'expression.
    // Contrat :
    //     Les variables/constantes utilisées sont bien déclarées

    Expression * Simplifier( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi : simplifie l'expression en propageant les
    //     constantes, supprimant les éléments neutres, etc.
    //     Retourne l'expression simplifiée.
    // Contrat :

    void Afficher ( ostream & out ) const;
    // Mode d'emploi :
    //     Ecrit l'expression sur la sortie donnée en paramètre

    int GetValeur ( );
    // Mode d'emploi :
    //     Renvoie la valeur constante de cette expression.
    
    bool Verifier ( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi :
    //     Ecrit l'expression sur la sortie donnée en paramètre

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ExpressionValeur ( const ExpressionValeur & unExpressionValeur );
    // Interdit

    ExpressionValeur ( );
    // Interdit

    ExpressionValeur ( int val );

    virtual ~ExpressionValeur ( );

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
    // valeur constante de cette expression

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <ExpressionValeur>

#endif // EXPRESSIONVALEUR_H
