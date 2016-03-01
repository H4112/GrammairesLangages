/*************************************************************************
                           OperateurMult  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 18:29:02
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <OperateurMult> (fichier OperateurMult.h) ------
#if ! defined ( OPERATEURMULT_H )
#define OPERATEURMULT_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <OperateurMult>
// Définit le symbole OperateurMult manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class OperateurMult : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    OperateurMult ( const OperateurMult & unOperateurMult );

    OperateurMult ( ); 

    virtual ~OperateurMult ( );

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

//----------------------------------------- Types dépendants de <OperateurMult>

#endif // OPERATEURMULT_H
