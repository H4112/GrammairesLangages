/*************************************************************************
                           Affectation  -  Instruction
                             -------------------
    début                : 15/03/2016 11:22:07
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Affectation> (fichier Affectation.h) ------
#if ! defined ( AFFECTATION_H )
#define AFFECTATION_H

//--------------------------------------------------- Interfaces utilisées
#include "symboles/Instruction.h"
#include "symboles/Expression.h"
#include "Variable.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Affectation>
//
//
//------------------------------------------------------------------------ 

class Affectation : public Instruction
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Executer( map < string, Declaration * > & tableDeclarations );

    void Simplifier( map < string, Declaration * > & tableDeclarations );

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Affectation ( const Affectation & unAffectation );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Affectation ( );
    // Interdit

    Affectation ( string nomVar, Expression * expr );

    virtual ~Affectation ( );
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
    string nomVariable;
    Expression * expression;
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Affectation>

#endif // AFFECTATION_H
