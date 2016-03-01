/*************************************************************************
                           OuvrePar  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <OuvrePar> (fichier OuvrePar.h) ------
#if ! defined ( OUVREPAR_H )
#define OUVREPAR_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <OuvrePar>
// Définit le symbole OuvrePar manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class OuvrePar : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    OuvrePar ( const OuvrePar & unOuvrePar );

    OuvrePar ( ); 

    virtual ~OuvrePar ( );

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

//----------------------------------------- Types dépendants de <OuvrePar>

#endif // OUVREPAR_H
