/*************************************************************************
                           FermePar  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 18:29:02
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <FermePar> (fichier FermePar.h) ------
#if ! defined ( FERMEPAR_H )
#define FERMEPAR_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <FermePar>
// Définit le symbole FermePar manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class FermePar : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    FermePar ( const FermePar & unFermePar );

    FermePar ( ); 

    virtual ~FermePar ( );

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

//----------------------------------------- Types dépendants de <FermePar>

#endif // FERMEPAR_H
