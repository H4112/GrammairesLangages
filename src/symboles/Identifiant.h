/*************************************************************************
                           Identifiant  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Identifiant> (fichier Identifiant.h) ------
#if ! defined ( IDENTIFIANT_H )
#define IDENTIFIANT_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Identifiant>
// Définit le symbole Identifiant manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class Identifiant : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Identifiant ( const Identifiant & unIdentifiant );

    Identifiant ( ); 

    virtual ~Identifiant ( );

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

//----------------------------------------- Types dépendants de <Identifiant>

#endif // IDENTIFIANT_H
