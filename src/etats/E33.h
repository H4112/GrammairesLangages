/*************************************************************************
                           E33  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <E33> (fichier E33.h) ------
#if ! defined ( E33_H )
#define E33_H

//--------------------------------------------------- Interfaces utilisées
#include "../symboles/Symbole.h"
#include "../Automate.h"
#include "Etat.h"
#include "../symboles/Valeur.h"
#include "../symboles/Identifiant.h"
#include "../symboles/ListeIdentifiantsValeurs.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <E33>
// Définit l'état E33 de l'automate et ses transitions.
//
//------------------------------------------------------------------------ 

class E33 : public Etat
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
    E33 ( const E33 & unE33 );

    E33 ( ); 

    virtual ~E33 ( );

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

//----------------------------------------- Types dépendants de <E33>

#endif // E33_H
