/*************************************************************************
                 ExpressionSoustraction  -  Soustraction de 2 termes
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
    ExpressionSoustraction ( const ExpressionSoustraction & unExpressionSoustraction );
    // Interdit

    ExpressionSoustraction ( );
    // Interdit

    ExpressionSoustraction ( Expression * gauche, Expression * droite );

    virtual ~ExpressionSoustraction ( );

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
