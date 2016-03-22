/*************************************************************************
                 ExpressionIdentifiant  -  Valeur d'une variable
                             -------------------
    début                : 15/03/2016 12:01:49
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ExpressionIdentifiant> (fichier ExpressionIdentifiant.h) ------
#if ! defined ( EXPRESSIONIDENTIFIANT_H )
#define EXPRESSIONIDENTIFIANT_H

//--------------------------------------------------- Interfaces utilisées
#include "symboles/Expression.h"
#include "ExpressionValeur.h"
#include "Variable.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ExpressionIdentifiant>
// Expression possédant la valeur d'une variable / constante.
//
//------------------------------------------------------------------------ 

class ExpressionIdentifiant : public Expression
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

    bool Verifier ( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi :
    //     Vérification statique

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ExpressionIdentifiant ( const ExpressionIdentifiant & unExpressionIdentifiant );
    // Interdit

    ExpressionIdentifiant ( );
    // Interdit

    ExpressionIdentifiant ( string ident );

    virtual ~ExpressionIdentifiant ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées
    string id;
    // nom de la variable dont l'expression prend la valeur

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <ExpressionIdentifiant>

#endif // EXPRESSIONIDENTIFIANT_H
