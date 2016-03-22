/*************************************************************************
                           ExpressionDivision  -  description
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
    
    Expression * Simplifier ( map < string, Declaration * > & tableDeclarations );

    void Afficher ( ostream & out ) const;

//------------------------------------------------- Surcharge d'opérateurs
//-------------------------------------------- Constructeurs - destructeur
    ExpressionDivision ( const ExpressionDivision & unExpressionDivision );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ExpressionDivision ( );
    // Interdit

    ExpressionDivision ( Expression * gauche, Expression * droite );

    virtual ~ExpressionDivision ( );
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

//----------------------------------------- Types dépendants de <ExpressionDivision>

#endif // EXPRESSIONDIVISION_H
