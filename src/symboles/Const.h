/*************************************************************************
                           Const  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Const> (fichier Const.h) ------
#if ! defined ( CONST_H )
#define CONST_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

//------------------------------------------------------------- Consts 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Const>
// Définit le symbole Const manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class Const : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Const ( const Const & unConst );
    // Interdit

    Const ( ); 

    virtual ~Const ( );

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

//----------------------------------------- Types dépendants de <Const>

#endif // CONST_H
