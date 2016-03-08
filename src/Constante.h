/*************************************************************************
                  Constante  -  Déclaration d'une constante
                             -------------------
    début                : 8 mars 2016 11:22:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Constante> (fichier Constante.h) ------
#if ! defined ( CONSTANTE_H )
#define CONSTANTE_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include "Declaration.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Constante>
//
//
//------------------------------------------------------------------------ 

class Constante : public Declaration
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    bool EstAffectable ( ) const;
    // Mode d'emploi :
    //     Renvoie toujours faux.

    bool EstAffecte ( ) const;
    // Mode d'emploi :
    //     Renvoie toujours vrai.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Constante ( const Constante & uneConstante );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Constante ( );
    // Interdit

    Constante ( string id, int val );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Constante ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

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

//----------------------------------------- Types dépendants de <Constante>

#endif // CONSTANTE_H
