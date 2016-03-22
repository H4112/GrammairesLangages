/*************************************************************************
                           Identifiant  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
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
    operator string() const { return id; }
//-------------------------------------------- Constructeurs - destructeur
    Identifiant ( const Identifiant & unIdentifiant );

    Identifiant ( ); 

    Identifiant ( string id ); 

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
    string id;
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Identifiant>

#endif // IDENTIFIANT_H
