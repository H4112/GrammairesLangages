/*************************************************************************
                           E31  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <E31> (fichier E31.h) ------
#if ! defined ( E31_H )
#define E31_H

//--------------------------------------------------- Interfaces utilisées
#include "../symboles/Symbole.h"
#include "../Automate.h"
#include "Etat.h"
#include "../symboles/Identifiant.h"
#include "../symboles/ListeIdentifiants.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <E31>
// Définit l'état E31 de l'automate et ses transitions.
//
//------------------------------------------------------------------------ 

class E31 : public Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Afficher ( ) const;
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
    E31 ( const E31 & unE31 );

    E31 ( ); 

    virtual ~E31 ( );

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

//----------------------------------------- Types dépendants de <E31>

#endif // E31_H
