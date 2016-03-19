/*************************************************************************
                           ExpressionAddition  -  description
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
	
	Expression * Simplifier( map < string, Declaration * > & tableDeclarations );

	void Print ( ostream & out ) const;


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ExpressionAddition ( const ExpressionAddition & unExpressionAddition );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ExpressionAddition ( );
    // Interdit

    ExpressionAddition ( Expression * gauche, Expression * droite );
    
    virtual ~ExpressionAddition ( );
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

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <ExpressionAddition>

#endif // EXPRESSIONADDITION_H
