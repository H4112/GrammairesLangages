/*************************************************************************
                           Automate  -  Automate de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Automate> (fichier Automate.h) ------
#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

class Automate; //Etat utilise Automate, nous devons l'avoir déclaré
                //avant de l'inclure

//--------------------------------------------------- Interfaces utilisées
#include <stack>
#include <map>
#include <string>

#include "symboles/Symbole.h"
#include "symboles/Declaration.h"
#include "etats/Etat.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Automate>
// Permet d'exécuter l'automate à pile qui est la base de l'analyseur
// SLR(1), en gérant une pile de symboles et d'états.
//
//------------------------------------------------------------------------ 

class Automate
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void reduction ( Symbole * symboleEmpile, int nbDepile );
    // Mode d'emploi :
    //     Dépile nbDepile états de la pile, puis applique la transition
    //     correspondant au symbole passé en paramètre.
    //     Cette méthode empile également le symbole.
    //Contrat :
    //     Avoir au moins nbDepile + 1 états dans la pile et passer un
    //     symbole non-nul.
    
    void decalage ( Symbole * symboleEmpile, Etat * etatEmpile );
    //Mode d'emploi :
    //    Empile le symbole et l'état indiqué, puis change d'état.
    //Contrat :
    //    Symbole et état non nuls.
    
    Symbole * popSymbole ( );
    //Mode d'emploi :
    //    Renvoie le dernier symbole de la pile et le retire de la pile.
    //    Renvoie NULL si aucun symbole n'est présent.
    //Contrat :
    //    Aucun.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Automate ( const Automate & unAutomate );

    Automate ( );
    // Interdit

    Automate ( string nomFichier );

    virtual ~Automate ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
    stack < Symbole * > pileSymboles;
    stack < Etat * > pileEtats;
    Lexer lexer;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Automate>

#endif // AUTOMATE_H
