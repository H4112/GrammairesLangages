/*************************************************************************
                           E12  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E12> (fichier E12.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E12.h"
#include "../symboles/Virgule.h"
#include "../symboles/PointVirgule.h"
#include "../symboles/ListeIdentifiants.h"
#include "../symboles/Identifiant.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E12::Afficher ( ) const 
{
	cout << "E12" << endl;
}

bool E12::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case VIRGULE:
		case POINT_VIRGULE:
		{
			Identifiant * id = (Identifiant *) automate.PopSymbole();

			ListeIdentifiants * lid = new ListeIdentifiants();
			lid->AjouterVariable(id);
			
			//réduire R6
			automate.Reduction(lid, 1);
			return true;
		}
	}
	
	return false;
}

Symbole * E12::Recuperation ( Symbole * symb )
{
	if(*symb == ID)
	{
		// Certainement une virgule oubliée
		return new Virgule;
	}
	else
	{
		// On considère que nous avons commencé une autre expression
		return new PointVirgule;
	}
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E12::E12 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E12>" << endl;
#endif
} //----- Fin de E12

E12::~E12 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E12>" << endl;
#endif
} //----- Fin de ~E12


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
