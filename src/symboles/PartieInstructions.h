/*************************************************************************
                           PartieInstructions  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:38:26
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <PartieInstructions> (fichier PartieInstructions.h) ------
#if ! defined ( PARTIEINSTRUCTIONS_H )
#define PARTIEINSTRUCTIONS_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <PartieInstructions>
// Définit le symbole PartieInstructions manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class PartieInstructions : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PartieInstructions ( const PartieInstructions & unPartieInstructions );

    PartieInstructions ( ); 

    virtual ~PartieInstructions ( );

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

//----------------------------------------- Types dépendants de <PartieInstructions>

#endif // PARTIEINSTRUCTIONS_H
