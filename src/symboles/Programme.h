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
    // Mode d'emploi : exécute le programme
    // Contrat : aucun

//------------------------------------------------- Surcharge d'opérateurs
    friend ostream & operator << ( ostream & out,
        const Programme & programme );
    
//-------------------------------------------- Constructeurs - destructeur
    Programme ( const Programme & unProgramme );

    Programme ( ); 
    // Interdit.

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
