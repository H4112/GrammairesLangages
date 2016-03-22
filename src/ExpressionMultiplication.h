/*************************************************************************
                   ExpressionMultiplication  -  Produit de 2 termes
                             -------------------
    début                : 15/03/2016 09:59:12
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ExpressionMultiplication> (fichier ExpressionMultiplication.h) ------
#if ! defined ( EXPRESSIONMULTIPLICATION_H )
#define EXPRESSIONMULTIPLICATION_H

//--------------------------------------------------- Interfaces utilisées
#include "ExpressionBinaire.h"
#include "ExpressionValeur.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ExpressionMultiplication>
// Réalise la multiplication des 2 termes passés en paramètre
//
//------------------------------------------------------------------------ 

class ExpressionMultiplication : public ExpressionBinaire
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

    
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ExpressionMultiplication ( const ExpressionMultiplication & unExpressionMultiplication );
    // Interdit

    ExpressionMultiplication ( );
    // Interdit

    ExpressionMultiplication ( Expression * gauche, Expression * droite );

    virtual ~ExpressionMultiplication ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <ExpressionMultiplication>

#endif // EXPRESSIONMULTIPLICATION_H
