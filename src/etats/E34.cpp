/*************************************************************************
                           E34  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E34> (fichier E34.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E34.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E34::print() const 
{
	cout << "E34" << endl;
}

bool E34::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case POINT_VIRGULE:
	case FERMEPAR:
	case OPA:
		Symbole * t = automate.popSymbole();
		Symbole * opa = automate.popSymbole();
		Symbole * e = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R14
		automate.reduction(nouveauSymbole, E, 3);
		return true;
	case OPM:
		automate.decalage(s, new E28);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E34::E34 ( const E34 & unE34 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E34>" << endl;
#endif
} //----- Fin de E34 (constructeur de copie)


E34::E34 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E34>" << endl;
#endif
} //----- Fin de E34


E34::~E34 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E34>" << endl;
#endif
} //----- Fin de ~E34


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
