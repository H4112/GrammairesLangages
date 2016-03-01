/*************************************************************************
                           E13  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 18:29:02
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E13> (fichier E13.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E13.h"
#include "E25.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E13::print() const 
{
	cout << "E13" << endl;
}

bool E13::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
		case VIRGULE:
		{
		automate.decalage(s, new E25);
			return true;
		}
		case POINT_VIRGULE:
		{
			Symbole * lidv = automate.popSymbole();
			Symbole * constante = automate.popSymbole();

			Symbole * nouveauSymbole;
			//TODO remplir cette variable pour réduire R4
			automate.reduction(nouveauSymbole, 2);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E13::E13 ( const E13 & unE13 )
	: Etat(unE13)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E13>" << endl;
#endif
} //----- Fin de E13 (constructeur de copie)


E13::E13 ( )
	: Etat()
{
#ifdef MAP
    cout << "Appel au constructeur de <E13>" << endl;
#endif
} //----- Fin de E13


E13::~E13 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E13>" << endl;
#endif
} //----- Fin de ~E13


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
