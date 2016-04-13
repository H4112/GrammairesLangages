/*************************************************************************
                         Programme  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Programme> (fichier Programme.h) ------
#if ! defined ( PROGRAMME_H )
#define PROGRAMME_H

//--------------------------------------------------- Interfaces utilisées
#include <list>

#include "Symbole.h"
#include "Instruction.h"
#include "../Declaration.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Programme>
// Définit le symbole Programme manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class Programme : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Executer ( );
    // Mode d'emploi :
    //     Exécute le programme.
    // Contrat :
    //     L'analyse statique a réussi.
    
    bool Verifier ( );
    // Mode d'emploi :
    //     Vérifie que:
    //     — Une variable est utilisée (en partie droite d’une affectation ou dans une opération d’écriture) sans avoir
    //       jamais été affectée.
    //     — Une variable a été déclarée et jamais affectée ou utilisée.
    //     — Une variable n’a pas été déclarée.
    //     — Une constante ne peut être modifiée.
    // Contrat :
    //     Le programme est valide.

    void Simplifier ( );
    // Mode d'emploi : simplifie l'expression en propageant les
    //     constantes, supprimant les éléments neutres, etc.
    //     Retourne l'expression simplifiée.
    // Contrat :
    //     Les variables/constantes utilisées sont bien déclarées.

//------------------------------------------------- Surcharge d'opérateurs
    friend ostream & operator << ( ostream & out,
        const Programme & programme );
    
//-------------------------------------------- Constructeurs - destructeur
    Programme ( const Programme & unProgramme );
    // Interdit

    Programme ( ); 
    // Interdit

    Programme ( map < string, Declaration * > tableDeclarations,
        list < Instruction * > listeInstructions );

    virtual ~Programme ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
    map < string, Declaration * > tableDeclarations;
    list < Instruction * > listeInstructions;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Programme>

#endif // PROGRAMME_H
