/*************************************************************************
                           ListeIdentifiants  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ListeIdentifiants> (fichier ListeIdentifiants.h) ------
#if ! defined ( LISTEIDENTIFIANTS_H )
#define LISTEIDENTIFIANTS_H

//--------------------------------------------------- Interfaces utilisées
#include "Identifiant.h"
#include "ListeDeclaration.h"
#include "../Variable.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ListeIdentifiants>
// Définit le symbole ListeIdentifiants manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class ListeIdentifiants : public ListeDeclaration
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void AjouterVariable ( Identifiant * id );
    // Mode d'emploi :
    //     Crée une nouvelle variable et l'ajoute à la liste.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ListeIdentifiants ( const ListeIdentifiants & unListeIdentifiants );
    // Interdit

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
