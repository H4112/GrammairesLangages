/*************************************************************************
                           Instruction  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Instruction> (fichier Instruction.h) ------
#if ! defined ( INSTRUCTION_H )
#define INSTRUCTION_H

//--------------------------------------------------- Interfaces utilisées
#include <map>
#include "Symbole.h"
#include "../Declaration.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Instruction>
// Définit le symbole Instruction manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class Instruction : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Executer( map < string, Declaration * > tableDeclarations );
    // Mode d'emploi : exécute l'instruction et met à jour les variables
    //     si nécessaire.
    void Simplifier( map < string, Declaration * > tableDeclarations );
    // Mode d'emploi : simplifie l'instruction en propageant les
    //     constantes, supprimant les éléments neutres, etc.
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Instruction ( const Instruction & unInstruction );

    Instruction ( ); 

    virtual ~Instruction ( );

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

//----------------------------------------- Types dépendants de <Instruction>

#endif // INSTRUCTION_H
