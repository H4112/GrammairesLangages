/*************************************************************************
                  ExpressionAddition  -  Addition de 2 termes
                             -------------------
    début                : 15/03/2016 09:59:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ExpressionAddition> (fichier ExpressionAddition.h) ------
#if ! defined ( EXPRESSIONADDITION_H )
#define EXPRESSIONADDITION_H

//--------------------------------------------------- Interfaces utilisées
#include "ExpressionBinaire.h"
#include "ExpressionValeur.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ExpressionAddition>
// Réalise l'addition des deux termes passés en paramètre.
//
//------------------------------------------------------------------------ 

class ExpressionAddition : public ExpressionBinaire
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
    //     Les variables/constantes utilisées sont bien déclarées

    void Afficher ( ostream & out ) const;
    // Mode d'emploi :
    //     Ecrit l'expression sur la sortie donnée en paramètre

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ExpressionAddition ( const ExpressionAddition & uneExpressionAddition );
    // Interdit

    ExpressionAddition ( );
    // Interdit

    ExpressionAddition ( Expression * gauche, Expression * droite );
    
    virtual ~ExpressionAddition ( );

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

//----------------------------------------- Types dépendants de <ExpressionAddition>

#endif // EXPRESSIONADDITION_H
