/*************************************************************************
                           E19  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:38:26
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E19> (fichier E19.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E19.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E19::print() const 
{
	cout << "E19" << endl;
}

bool E19::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case POINT_VIRGULE:
	case FERMEPAR:
	case OPA:
	case OPM:
		Symbole * f = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour réduire R17
		automate.reduction(nouveauSymbole, T, 1);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E19::E19 ( const E19 & unE19 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E19>" << endl;
#endif
} //----- Fin de E19 (constructeur de copie)


E19::E19 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E19>" << endl;
#endif
} //----- Fin de E19


E19::~E19 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E19>" << endl;
#endif
} //----- Fin de ~E19


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
