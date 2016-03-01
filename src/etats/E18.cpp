/*************************************************************************
                           E18  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E18> (fichier E18.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E18.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E18::print() const 
{
	cout << "E18" << endl;
}

bool E18::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case POINT_VIRGULE:
	case FERMEPAR:
	case OPA:
		Symbole * t = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R15
		automate.reduction(nouveauSymbole, E, 1);
		return true;
	case OPM:
		automate.decalage(s, new E28);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E18::E18 ( const E18 & unE18 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E18>" << endl;
#endif
} //----- Fin de E18 (constructeur de copie)


E18::E18 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E18>" << endl;
#endif
} //----- Fin de E18


E18::~E18 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E18>" << endl;
#endif
} //----- Fin de ~E18


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
