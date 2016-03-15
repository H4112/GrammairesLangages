/*************************************************************************
                           ExpressionMultiplication  -  description
                             -------------------
    début                : 15/03/2016 09:59:12
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ExpressionMultiplication> (fichier ExpressionMultiplication.h) ------
#if ! defined ( EXPRESSIONMULTIPLICATION_H )
#define EXPRESSIONMULTIPLICATION_H

//--------------------------------------------------- Interfaces utilisées
#include "ExpressionBinaire.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ExpressionMultiplication>
//
//
//------------------------------------------------------------------------ 

class ExpressionMultiplication : public ExpressionBinaire
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste de paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
    ExpressionMultiplication ( const ExpressionMultiplication & unExpressionMultiplication );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ExpressionMultiplication ( );
    // Interdit

    ExpressionMultiplication ( Expression * gauche, Expression * droite );

    virtual ~ExpressionMultiplication ( );
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

//----------------------------------------- Types dépendants de <ExpressionMultiplication>

#endif // EXPRESSIONMULTIPLICATION_H
