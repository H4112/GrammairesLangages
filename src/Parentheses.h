/*************************************************************************
                           Parentheses  -  description
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
    // type Méthode ( liste de paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Parentheses ( const Parentheses & unParentheses );
    // Mode d'emploi (constructeur de copie)

    Parentheses ( );
    // Interdit

    Parentheses ( Expression * exp );

    virtual ~Parentheses ( );
    // Mode d'emploi

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées
    Expression * expression;
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
