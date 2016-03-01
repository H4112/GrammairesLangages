/*************************************************************************
                           E35  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E35> (fichier E35.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E35.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E35::print() const 
{
	cout << "E35" << endl;
}

bool E35::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case POINT_VIRGULE:
	case FERMEPAR:
	case OPA:
	case OPM:
		Symbole * f = automate.popSymbole();
		Symbole * opm = automate.popSymbole();
		Symbole * t = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R16
		automate.reduction(nouveauSymbole, T, 3);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E35::E35 ( const E35 & unE35 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E35>" << endl;
#endif
} //----- Fin de E35 (constructeur de copie)


E35::E35 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E35>" << endl;
#endif
} //----- Fin de E35


E35::~E35 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E35>" << endl;
#endif
} //----- Fin de ~E35


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
