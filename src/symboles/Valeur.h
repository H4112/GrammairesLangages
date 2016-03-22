/*************************************************************************
                           Valeur  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Valeur> (fichier Valeur.h) ------
#if ! defined ( VALEUR_H )
#define VALEUR_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Valeur>
// Définit le symbole Valeur manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class Valeur : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const { return valeur; }

//-------------------------------------------- Constructeurs - destructeur
    Valeur ( const Valeur & unValeur );
    // Interdit

    Valeur ( );
    // Interdit

    Valeur ( string val );

    virtual ~Valeur ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
    int valeur;
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Valeur>

#endif // VALEUR_H
