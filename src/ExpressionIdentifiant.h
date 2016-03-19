/*************************************************************************
                           ExpressionIdentifiant  -  description
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
//
//
//------------------------------------------------------------------------ 

class ExpressionIdentifiant : public Expression
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    int Evaluer( map < string, Declaration * > & tableDeclarations );
    
    Expression * Simplifier( map < string, Declaration * > & tableDeclarations );

	void Afficher ( ostream & out ) const;

    bool Verifier ( map < string, Declaration * > & tableDeclarations );

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ExpressionIdentifiant ( const ExpressionIdentifiant & unExpressionIdentifiant );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ExpressionIdentifiant ( );
    // Interdit

    ExpressionIdentifiant ( string ident );

    virtual ~ExpressionIdentifiant ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées
    string id;
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
