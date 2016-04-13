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
#include "ExpressionValeur.h"
#include "Variable.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Affectation>
// Instruction permettant d'affecter la valeur d'une expression à
// une variable.
//
//------------------------------------------------------------------------ 

class Affectation : public Instruction
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Executer( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi : exécute l'instruction et met à jour les variables
    //     si nécessaire.
    
    void Simplifier( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi : 
    //     Simplifie l'instruction en propageant les
    //     constantes, supprimant les éléments neutres, etc.
    // Contrat :
    //     Les variables/constantes utilisées sont bien déclarées

    bool Verifier( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi :
    //     Vérification statique

    void Afficher( ostream & out ) const;
    // Mode d'emploi :
    //     Ecrit l'instruction sur la sortie donnée en paramètre


//------------------------------------------------- Surcharge d'opérateurs
    
//-------------------------------------------- Constructeurs - destructeur
    Affectation ( const Affectation & uneAffectation );
    // Interdit

    Affectation ( );
    // Interdit

    Affectation ( string nomVar, Expression * expr );

    virtual ~Affectation ( );

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
    // nom de la variable à modifier

    Expression * expression;
    // expression à affecter à la variable

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Affectation>

#endif // AFFECTATION_H
