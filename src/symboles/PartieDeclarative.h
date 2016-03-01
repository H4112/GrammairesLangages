/*************************************************************************
                           PartieDeclarative  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 18:29:02
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <PartieDeclarative> (fichier PartieDeclarative.h) ------
#if ! defined ( PARTIEDECLARATIVE_H )
#define PARTIEDECLARATIVE_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <PartieDeclarative>
// Définit le symbole PartieDeclarative manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class PartieDeclarative : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PartieDeclarative ( const PartieDeclarative & unPartieDeclarative );

    PartieDeclarative ( ); 

    virtual ~PartieDeclarative ( );

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

//----------------------------------------- Types dépendants de <PartieDeclarative>

#endif // PARTIEDECLARATIVE_H
