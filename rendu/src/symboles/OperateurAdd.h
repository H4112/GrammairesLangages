/*************************************************************************
                           OperateurAdd  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <OperateurAdd> (fichier OperateurAdd.h) ------
#if ! defined ( OPERATEURADD_H )
#define OPERATEURADD_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <OperateurAdd>
// Définit le symbole OperateurAdd manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class OperateurAdd : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    OperateurAdd ( const OperateurAdd & unOperateurAdd );
    // Interdit

    OperateurAdd ( string type ); 

    virtual ~OperateurAdd ( );

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

//----------------------------------------- Types dépendants de <OperateurAdd>

#endif // OPERATEURADD_H
