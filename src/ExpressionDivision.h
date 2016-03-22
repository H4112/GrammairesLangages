/*************************************************************************
                 ExpressionDivision  -  Division entière de 2 termes
                             -------------------
    début                : 15/03/2016 09:59:17
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ExpressionDivision> (fichier ExpressionDivision.h) ------
#if ! defined ( EXPRESSIONDIVISION_H )
#define EXPRESSIONDIVISION_H

//--------------------------------------------------- Interfaces utilisées
#include "ExpressionBinaire.h"
#include "ExpressionValeur.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ExpressionDivision>
// Réalise la division (tronquée à l'entier inférieur) des deux paramètres.
//
//------------------------------------------------------------------------ 

class ExpressionDivision : public ExpressionBinaire
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
    ExpressionDivision ( const ExpressionDivision & unExpressionDivision );
    // Interdit

    ExpressionDivision ( );
    // Interdit

    ExpressionDivision ( Expression * gauche, Expression * droite );

    virtual ~ExpressionDivision ( );

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

//----------------------------------------- Types dépendants de <ExpressionDivision>

#endif // EXPRESSIONDIVISION_H
