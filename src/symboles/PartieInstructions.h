/*************************************************************************
                           PartieInstructions  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <PartieInstructions> (fichier PartieInstructions.h) ------
#if ! defined ( PARTIEINSTRUCTIONS_H )
#define PARTIEINSTRUCTIONS_H

//--------------------------------------------------- Interfaces utilisées
#include "Symbole.h"
#include "Instruction.h"
#include <list>

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <PartieInstructions>
// Définit le symbole PartieInstructions manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class PartieInstructions : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	list < Instruction * > GetInstructions ( );
	// Mode d'emploi :
	//	Renvoie les instructions de cette liste.
	
	void AjouterInstruction ( Instruction * instruction );
	//Mode d'emploi :
	//	Ajoute une instruction à la liste.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PartieInstructions ( const PartieInstructions & unePartieInstructions );

    PartieInstructions ( ); 

    virtual ~PartieInstructions ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
	list < Instruction * > listeInstructions;

	bool listeObtenue;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <PartieInstructions>

#endif // PARTIEINSTRUCTIONS_H
