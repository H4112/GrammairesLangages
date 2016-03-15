/*************************************************************************
                           E0  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:20
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <E0> (fichier E0.h) ------
#if ! defined ( E0_H )
#define E0_H

//--------------------------------------------------- Interfaces utilisées
#include "../Automate.h"
#include "Etat.h"
#include "../symboles/Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <E0>
// Définit l'état E0 de l'automate et ses transitions.
//
//------------------------------------------------------------------------ 

class E0 : public Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print ( ) const;
    // Mode d'emploi :
    //  Ecrit le nom de l'état sur la sortie standard.
    // Contrat :
    //  Aucun
	
	bool Transition ( Automate & automate, Symbole * s );
    // Mode d'emploi :
    //  Appelle l'automate donné en paramètre pour effectuer le décalage
	//  ou la réduction correspondant au symbole passé en paramètre.
    // Contrat :
    //  Aucun

//------------------------------------------------- Surcharge d'opérateurs
    

//-------------------------------------------- Constructeurs - destructeur
    E0 ( const E0 & unE0 );

    E0 ( ); 

    virtual ~E0 ( );

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

//----------------------------------------- Types dépendants de <E0>

#endif // E0_H
