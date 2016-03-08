/*************************************************************************
                           Declaration  -  Déclaration d'une variable/constante
                             -------------------
    début                : 8 mars 2016 11:21:34
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Declaration> (fichier Declaration.h) ------
#ifndef DECLARATION_H
#define DECLARATION_H

//--------------------------------------------------- Interfaces utilisées
#include <string.h>

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Declaration>
//	Cette classe représente une variable ou une constante
//	du programme Lutin, que le programme peut manipuler
//	par le biais d'une table de déclarations.
//
//------------------------------------------------------------------------ 

class Declaration
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    virtual bool EstAffectable ( ) = 0;
    // Mode d'emploi :
    //	Indique s'il est possible de modifier la valeur
    //	de cette déclaration.
    // Contrat :
    //	Aucun



//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
    Declaration ( string unId, int uneValeur = 0 );
    // Mode d'emploi :
    //	Permet de créer une nouvelle variable, avec des valeurs
    //	initiales pour le nom et la valeur.
    // Contrat :
    //	Aucun

    Declaration ( const Declaration & unDeclaration );
    // Mode d'emploi (constructeur de copie) :
    //	Permet de copier l'id et la valeur de la déclaration.
    // Contrat :
    //	Aucun

    virtual ~Declaration ( );
    // Mode d'emploi :
    //	Détruit la déclaration.
    // Contrat :
    //	Aucun


//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
	string id;
	int valeur;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Declaration>

#endif // DECLARATION_H
