/*************************************************************************
                           ListeIdentifiants  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 18:29:02
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ListeIdentifiants> (fichier ListeIdentifiants.h) ------
#if ! defined ( LISTEIDENTIFIANTS_H )
#define LISTEIDENTIFIANTS_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ListeIdentifiants>
// Définit le symbole ListeIdentifiants manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class ListeIdentifiants : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ListeIdentifiants ( const ListeIdentifiants & unListeIdentifiants );

    ListeIdentifiants ( ); 

    virtual ~ListeIdentifiants ( );

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

//----------------------------------------- Types dépendants de <ListeIdentifiants>

#endif // LISTEIDENTIFIANTS_H
