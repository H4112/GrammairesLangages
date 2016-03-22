/*************************************************************************
                           Ecriture  -  Instruction d'écriture
                             -------------------
    début                : 15/03/2016
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Ecriture> (fichier Ecriture.h) ------
#if ! defined ( ECRITURE_H )
#define ECRITURE_H

//--------------------------------------------------- Interfaces utilisées
#include "symboles/Instruction.h"
#include "symboles/Expression.h"
#include <map>

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Ecriture>
//    Instruction écrivant la valeur d'une expression sur la sortie standard.
//
//------------------------------------------------------------------------ 

class Ecriture : public Instruction
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Executer( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi : 
    //    Affiche la valeur de l'expression sur la sortie standard.
    
    void Simplifier( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi : 
    //    Simplifie l'expression associée à l'instruction d'écriture.

    void Afficher( ostream & out ) const;

    bool Verifier( map < string, Declaration * > & tableDeclarations );

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Ecriture ( const Ecriture & unEcriture );

    Ecriture ( );
    // Interdit
    
    Ecriture ( Expression * expr );
    // Mode d'emploi :
    //    Construit une instruction d'écriture d'une expression, qui affiche
    //    la valeur de l'expression sur la sortie standard.

    virtual ~Ecriture ( );

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

//----------------------------------------- Types dépendants de <Ecriture>

#endif // ECRITURE_H
