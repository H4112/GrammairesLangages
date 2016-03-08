/*************************************************************************
                           E31  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E31> (fichier E31.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E31.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E31::print() const 
{
	cout << "E31" << endl;
}

bool E31::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
		case VIRGULE:
		case POINT_VIRGULE:
		{
			Symbole * id = automate.popSymbole();
			Symbole * virgule = automate.popSymbole();
			Symbole * lid = automate.popSymbole();

			Symbole * nouveauSymbole;
			//TODO remplir cette variable pour réduire R5
			automate.reduction(nouveauSymbole, 3);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E31::E31 ( const E31 & unE31 )
	: Etat(unE31)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E31>" << endl;
#endif
} //----- Fin de E31 (constructeur de copie)


E31::E31 ( )
	: Etat()
{
#ifdef MAP
    cout << "Appel au constructeur de <E31>" << endl;
#endif
} //----- Fin de E31


E31::~E31 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E31>" << endl;
#endif
} //----- Fin de ~E31


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
