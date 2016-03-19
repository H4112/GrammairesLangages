/*************************************************************************
                           Automate  -  Automate de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Automate> (fichier Automate.h) ------
#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

//--------------------------------------------------- Interfaces utilisées
#include <stack>
#include <map>
#include <string>

class Automate;
#include "etats/Etat.h"
#include "symboles/Symbole.h"
#include "symboles/Programme.h"
#include "Lexer.h"

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
    void Reduction ( Symbole * symboleEmpile, int nbDepile );
    // Mode d'emploi :
    //     Dépile nbDepile états de la pile, puis applique la transition
    //     correspondant au symbole passé en paramètre.
    //     Cette méthode empile également le symbole.
    //Contrat :
    //     Avoir au moins nbDepile + 1 états dans la pile et passer un
    //     symbole non-nul.
    
    void Decalage ( Symbole * symboleEmpile, Etat * etatEmpile );
    //Mode d'emploi :
    //    Empile le symbole et l'état indiqué, puis change d'état.
    //Contrat :
    //    Symbole et état non nuls.
    
    Symbole * PopSymbole ( );
    //Mode d'emploi :
    //    Renvoie le dernier symbole de la pile et le retire de la pile.
    //    Renvoie NULL si aucun symbole n'est présent.
    //Contrat :
    //    Aucun.
	
	Programme * Executer ( );
	//Mode d'emploi :
	//    Exécute entièrement l'automate jusqu'à l'acceptation du fichier
	//    (dans lequel cas Executer renvoie le symbole Programme) ou jusqu'à la rencontre
	//    d'une erreur de syntaxe (Executer renvoie NULL/0).
	//Contrat :
	//    Aucun

	Programme * GetProgramme ( );
	//Mode d'emploi :
	//    Renvoie le programme reconnu, ou NULL si aucun programme
	//    n'est actuellement dans l'automate.
	//Contrat :
	//    Aucun

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
	void viderPiles();
	//Mode d'emploi :
	//    Permet de vider les piles et de détruire tous les symboles et états.
	//Contrat :
	//    Aucun

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
