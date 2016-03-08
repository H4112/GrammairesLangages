/*************************************************************************
                           PartieDeclarative  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <PartieDeclarative> (fichier PartieDeclarative.h) ------
#if ! defined ( PARTIEDECLARATIVE_H )
#define PARTIEDECLARATIVE_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"
#include "../Declaration.h"
#include "ListeDeclaration.h"

#include <string>
#include <map>

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <PartieDeclarative>
// Définit le symbole PartieDeclarative manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class PartieDeclarative : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	bool AjouterDeclarations( ListeDeclaration liste );
	// Mode d'emploi :
	//	Ajoute une liste de déclarations à cette partie déclarative.
	//	Renvoie true si aucun identifiant n'a été dupliqué, sinon false.
	// Contrat :
	//	Aucun

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PartieDeclarative ( const PartieDeclarative & unPartieDeclarative );

    PartieDeclarative ( ); 

    virtual ~PartieDeclarative ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
	map< string, Declaration * > tableDeclarations;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PartieDeclarative>

#endif // PARTIEDECLARATIVE_H
