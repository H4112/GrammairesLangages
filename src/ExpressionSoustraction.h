/*************************************************************************
                           ExpressionSoustraction  -  description
                             -------------------
    début                : 15/03/2016 10:04:16
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ExpressionSoustraction> (fichier ExpressionSoustraction.h) ------
#if ! defined ( EXPRESSIONSOUSTRACTION_H )
#define EXPRESSIONSOUSTRACTION_H

//--------------------------------------------------- Interfaces utilisées
#include "ExpressionBinaire.h"
#include "ExpressionValeur.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ExpressionSoustraction>
//
//
//------------------------------------------------------------------------ 

class ExpressionSoustraction : public ExpressionBinaire
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    int Evaluer( map < string, Declaration * > & tableDeclarations );
	
	Expression * Simplifier( map < string, Declaration * > & tableDeclarations );

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
    ExpressionSoustraction ( const ExpressionSoustraction & unExpressionSoustraction );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ExpressionSoustraction ( );
    // Interdit

    ExpressionSoustraction ( Expression * gauche, Expression * droite );

    virtual ~ExpressionSoustraction ( );
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

//----------------------------------------- Types dépendants de <ExpressionSoustraction>

#endif // EXPRESSIONSOUSTRACTION_H
