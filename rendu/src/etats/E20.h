/*************************************************************************
                           E20  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <E20> (fichier E20.h) ------
#if ! defined ( E20_H )
#define E20_H

//--------------------------------------------------- Interfaces utilisées
#include "../symboles/Symbole.h"
#include "../Automate.h"
#include "Etat.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <E20>
// Définit l'état E20 de l'automate et ses transitions.
//
//------------------------------------------------------------------------ 

class E20 : public Etat
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
    E20 ( const E20 & unE20 );
    // Interdit

    E20 ( ); 

    virtual ~E20 ( );

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

//----------------------------------------- Types dépendants de <E20>

#endif // E20_H
