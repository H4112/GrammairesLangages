/*************************************************************************
                           E11  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:17
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E11> (fichier E11.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E11.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E11::print() const 
{
	cout << "E11" << endl;
}

bool E11::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case VIRGULE:
		automate.decalage(s, new E24);
		return true;
	case POINT_VIRGULE:
		Symbole * lid = automate.popSymbole();
		Symbole * var = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R3
		automate.reduction(nouveauSymbole, D, 2);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E11::E11 ( const E11 & unE11 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E11>" << endl;
#endif
} //----- Fin de E11 (constructeur de copie)


E11::E11 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E11>" << endl;
#endif
} //----- Fin de E11


E11::~E11 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E11>" << endl;
#endif
} //----- Fin de ~E11


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
