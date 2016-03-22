/*************************************************************************
                    ListeDeclaration  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ListeDeclaration> (fichier ListeDeclaration.h) ------
#if ! defined ( LISTEDECLARATION_H )
#define LISTEDECLARATION_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

#include <list>

#include "../Declaration.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ListeDeclaration>
// Définit le symbole ListeDeclaration manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class ListeDeclaration : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    list < Declaration * > GetListeDeclarations ( ) ;
    // Mode d'emploi :
    //     Permet d'obtenir la liste des déclarations contenue 
    //     dans cette ListeDeclaration.
    // Contrat :
    //     Aucun
    
    void SetIdent ( int id );
    // Mode d'emploi :
    //     Permet de changer le type de Symbole

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ListeDeclaration ( const ListeDeclaration & unListeDeclaration );
    // Interdit

    ListeDeclaration ( int id );

    virtual ~ListeDeclaration ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées
    void ajouterDeclaration ( Declaration * declaration );
    // Mode d'emploi :
    //     Ajoute une déclaration à la liste.

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
    list < Declaration * > listeDeclarations;
    // Liste des déclarations trouvées sur une même ligne.

    bool declarationsObtenues;
    // true si GetDeclarations a été appelé, false sinon
    // Permet de savoir si on doit détruire les Declaration ou si le Programme
    // s'en chargera.

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <ListeDeclaration>

#endif // LISTEDECLARATION_H
