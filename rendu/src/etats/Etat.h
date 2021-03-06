/*************************************************************************
                           Etat  -  Etat de l'automate
                             -------------------
    début                : 1 mars 2016 17:48:07
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Etat> (fichier Etat.h) ------
#ifndef ETAT_H
#define ETAT_H

//--------------------------------------------------- Interfaces utilisées
class Etat;
#include "../Automate.h"
#include "../symboles/Symbole.h"

//------------------------------------------------------------- Constantes 
const int DOUBLE_DECLARATION = 1;

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Etat>
//    Cette classe représente un état de l'analyseur
//    syntaxique. La méthode transition permet à l'automate
//    de passer à l'état suivant en fonction du symbole lu.
//
//------------------------------------------------------------------------ 

class Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    virtual void Afficher ( ) const = 0;
    // Mode d'emploi :
    //     Ecrit le nom de l'état sur la sortie standard.
    // Contrat :
    //     Aucun
    
    virtual bool Transition ( Automate & automate, Symbole * s ) = 0;
    // Mode d'emploi :
    //     Permet d'effectuer la transition vers l'état suivant.
    // Contrat :
    //     Aucun

    virtual Symbole * Recuperation ( Symbole * symb );
    // Mode d'emploi :
    //     Renvoie le symbole sur lequel faire la transition,
    //     à la place du symbole lu passé en paramètre, pour récupérer d'une erreur.
    //     Renvoie NULL si l'erreur n'est pas simplement récupérable.
    // Contrat :
    //     Avoir auparavant appelé Transition qui a renvoyé false
    //     symb n'est pas NULL.

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
    virtual ~Etat ( );
    // Mode d'emploi :
    //    Détruit un état.
    // Contrat :
    //    Aucun

    Etat ( const Etat & unEtat );
    // Interdit

    Etat ( );
    // Mode d'emploi :
    //    Crée un état. Ne peut pas être utilisé directement.
    // Contrat :
    //    Aucun

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

//----------------------------------------- Types dépendants de <Etat>

#endif // ETAT_H
