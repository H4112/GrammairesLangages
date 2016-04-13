/*************************************************************************
                      PointVirgule  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <PointVirgule> (fichier PointVirgule.h) ------
#if ! defined ( POINTVIRGULE_H )
#define POINTVIRGULE_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <PointVirgule>
// Définit le symbole PointVirgule manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class PointVirgule : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PointVirgule ( const PointVirgule & unPointVirgule );
    // Interdit

    PointVirgule ( ); 

    virtual ~PointVirgule ( );

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

//----------------------------------------- Types dépendants de <PointVirgule>

#endif // POINTVIRGULE_H
