/*************************************************************************
                  Variable  -  Déclaration d'une Variable
                             -------------------
    début                : 8 mars 2016 11:22:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Variable> (fichier Variable.h) ------
#if ! defined ( VARIABLE_H )
#define VARIABLE_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include "Declaration.h"
//------------------------------------------------------------- Variables 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Variable>
//	Permet de décrire une variable, avec un identifiant et une valeur.
//
//------------------------------------------------------------------------ 

class Variable : public Declaration
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    bool EstAffectable ( ) const;
    // Mode d'emploi :
    //     Renvoie toujours vrai.

    bool EstAffecte ( ) const;
    // Mode d'emploi :
    //     Renvoie vrai si une valeur a été affectée à la variable.

    bool EstConstante ( ) const;
    // Mode d'emploi :
    //     Renvoie vrai si la variable a une valeur constante (affectée à partir de constantes)
	
	void Affecter ( );
	// Mode d'emploi :
	//		Passe affecte à true

    void SetValeur ( int val );
    // Mode d'emploi : 
    //      affecte une nouvelle valeur

    void SetConstante ( bool val );
    // Mode d'emploi :
    //      marque la variable comme constante ou non pour l'optimisation

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Variable ( const Variable & uneVariable );

    Variable ( );
    // Interdit

    Variable ( string id );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Variable ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
	bool affecte;
    bool constante;
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Variable>

#endif // VARIABLE_H
