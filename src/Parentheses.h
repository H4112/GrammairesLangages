/*************************************************************************
                       Parentheses  -  Expression parenthésée
                             -------------------
    début                : 15/03/2016 09:29:28
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Parentheses> (fichier Parentheses.h) ------
#if ! defined ( PARENTHESES_H )
#define PARENTHESES_H

//--------------------------------------------------- Interfaces utilisées
#include "symboles/Expression.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Parentheses>
//
//
//------------------------------------------------------------------------ 

class Parentheses : public Expression
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
    // Mode d'emploi : 
    //     Simplifie l'expression en propageant les
    //     constantes, supprimant les éléments neutres, etc.
    //     Retourne l'expression simplifiée.
    // Contrat :
    //     Les variables/constantes utilisées sont bien déclarées

    void Afficher( ostream & out ) const;
    // Mode d'emploi :
    //     Ecrit l'expression sur la sortie donnée en paramètre

    bool Verifier( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi :
    //     Vérification statique

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Parentheses ( const Parentheses & unParentheses );
    // Interdit

    Parentheses ( );
    // Interdit

    Parentheses ( Expression * exp );

    virtual ~Parentheses ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées
    Expression * expression;
    // expression contenue dans la parenthèse

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Parentheses>

#endif // PARENTHESES_H
