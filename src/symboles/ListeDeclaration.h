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
	//	Permet d'obtenir la liste des déclarations contenue 
	//	dans cette ListeDeclaration.
	// Contrat :
	//	Aucun

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ListeDeclaration ( const ListeDeclaration & unListeDeclaration );

    ListeDeclaration ( );
    ListeDeclaration ( int type );

    virtual ~ListeDeclaration ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées
	void ajouterDeclaration ( Declaration * declaration );

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
	list < Declaration * > listeDeclarations;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <ListeDeclaration>

#endif // LISTEDECLARATION_H
