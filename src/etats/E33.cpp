/*************************************************************************
                           E33  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E33> (fichier E33.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E33.h"

#include "../symboles/Virgule.h"
#include "../symboles/PointVirgule.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E33::Afficher ( ) const 
{
	cout << "E33" << endl;
}

bool E33::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case VIRGULE:
		case POINT_VIRGULE:
		{
			Valeur * val = (Valeur *) automate.PopSymbole();
			//Symbole * egal = 
			delete automate.PopSymbole();
			Identifiant * id = (Identifiant *) automate.PopSymbole();
			
			ListeIdentifiantsValeurs * lidv = new ListeIdentifiantsValeurs();
			lidv->AjouterConstante(id,val);
			//réduire R8
			automate.Reduction(lidv, 3);
			return true;
		}
	}
	
	return false;
}

Symbole * E33::Recuperation ( Symbole * symb )
{
	if(*symb == ID)
	{
		//certainement une virgule oubliée
		return new Virgule;
	}
	else
	{
		//on considère que nous avons commencé une autre expression
		return new PointVirgule;
	}
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E33::E33 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E33>" << endl;
#endif
} //----- Fin de E33


E33::~E33 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E33>" << endl;
#endif
} //----- Fin de ~E33


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
