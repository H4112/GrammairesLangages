/*************************************************************************
                           E12  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:12
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E12> (fichier E12.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E12.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E12::print() const 
{
	cout << "E12" << endl;
}

bool E12::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
		case VIRGULE:
		case POINT_VIRGULE:
		{
			Symbole * id = automate.popSymbole();

			Symbole * nouveauSymbole;
			//TODO remplir cette variable pour réduire R6
			automate.reduction(nouveauSymbole, 1);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E12::E12 ( const E12 & unE12 )
	: Etat(unE12)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E12>" << endl;
#endif
} //----- Fin de E12 (constructeur de copie)


E12::E12 ( )
	: Etat()
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
