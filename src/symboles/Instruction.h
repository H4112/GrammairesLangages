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
const int INSTR_AFF = 0;
const int INSTR_LIRE = 1;
const int INSTR_ECRIRE = 2;

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
    virtual void Executer( map < string, Declaration * > & tableDeclarations ) = 0;
    // Mode d'emploi : exécute l'instruction et met à jour les variables
    //     si nécessaire.
    
    virtual void Simplifier( map < string, Declaration * > & tableDeclarations ) = 0;
    // Mode d'emploi : simplifie l'instruction en propageant les
    //     constantes, supprimant les éléments neutres, etc.
    // Contrat :
    //     Les variables/constantes utilisées sont bien déclarées

    virtual bool Verifier( map < string, Declaration * > & tableDeclarations ) = 0;
    // Mode d'emploi :
    //     Vérification statique

    virtual void Afficher( ostream & out ) const = 0;
    // Mode d'emploi :
    //     Ecrit l'instruction sur la sortie donnée en paramètre

    int GetType ( ) const;
    // Mode d'emploi :
    //    Permet de connaître le type de l'instruction

//------------------------------------------------- Surcharge d'opérateurs
    friend ostream & operator << ( ostream & out,
        const Instruction & instruction );

//-------------------------------------------- Constructeurs - destructeur
    Instruction ( const Instruction & unInstruction );
    // Interdit

    Instruction ( );
    // Interdit

    Instruction ( int type );

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
    int typeInstruction;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Instruction>

#endif // INSTRUCTION_H
