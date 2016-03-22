/*************************************************************************
                           E32  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <E32> (fichier E32.h) ------
#if ! defined ( E32_H )
#define E32_H

//--------------------------------------------------- Interfaces utilisées
#include "../symboles/Symbole.h"
#include "../Automate.h"
#include "Etat.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <E32>
// Définit l'état E32 de l'automate et ses transitions.
//
//------------------------------------------------------------------------ 

class E32 : public Etat
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

	Symbole * Recuperation ( Symbole * symb );
    // Mode d'emploi :
    //     Renvoie le symbole sur lequel faire la transition,
    //     à la place du symbole lu passé en paramètre, pour récupérer d'une erreur.
    //     Renvoie NULL si l'erreur n'est pas simplement récupérable.
    // Contrat :
    //     Avoir auparavant appelé Transition qui a renvoyé false.
    //     symb n'est pas NULL.

//------------------------------------------------- Surcharge d'opérateurs
    

//-------------------------------------------- Constructeurs - destructeur
    E32 ( const E32 & unE32 );
    // Interdit

    E32 ( ); 

    virtual ~E32 ( );

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

//----------------------------------------- Types dépendants de <E32>

#endif // E32_H
