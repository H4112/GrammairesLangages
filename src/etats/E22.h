/*************************************************************************
                           E22  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <E22> (fichier E22.h) ------
#if ! defined ( E22_H )
#define E22_H

//--------------------------------------------------- Interfaces utilisées
#include "../symboles/Symbole.h"
#include "../Automate.h"
#include "Etat.h"
#include "../symboles/Valeur.h"
#include "../ExpressionValeur.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <E22>
// Définit l'état E22 de l'automate et ses transitions.
//
//------------------------------------------------------------------------ 

class E22 : public Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Afficher ( ) const;
    // Mode d'emploi :
    //     Ecrit le nom de l'état sur la sortie standard.
    // Contrat :
    //     Aucun
	
	bool Transition ( Automate & automate, Symbole * s );
    // Mode d'emploi :
    //     Appelle l'automate donné en paramètre pour effectuer le décalage
	//     ou la réduction correspondant au symbole passé en paramètre.
    // Contrat :
    //     Aucun

//------------------------------------------------- Surcharge d'opérateurs
    

//-------------------------------------------- Constructeurs - destructeur
    E22 ( const E22 & unE22 );
    // Interdit

    E22 ( ); 

    virtual ~E22 ( );

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

//----------------------------------------- Types dépendants de <E22>

#endif // E22_H
