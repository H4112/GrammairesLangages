/*************************************************************************
                           ListeDeclaration  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ListeDeclaration> (fichier ListeDeclaration.h) ------
#if ! defined ( ListeDECLARATION_H )
#define LISTEDECLARATION_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"

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

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ListeDeclaration ( const ListeDeclaration & unListeDeclaration );

    ListeDeclaration ( ); 

    virtual ~ListeDeclaration ( );

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

//----------------------------------------- Types dépendants de <ListeDeclaration>

#endif // LISTEDECLARATION_H
