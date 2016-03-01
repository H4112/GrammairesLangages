/*************************************************************************
                           E36  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E36> (fichier E36.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E36.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E36::print() const 
{
	cout << "E36" << endl;
}

bool E36::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case POINT_VIRGULE:
	case FERMEPAR:
	case OPA:
	case OPM:
		Symbole * fermepar = automate.popSymbole();
		Symbole * e = automate.popSymbole();
		Symbole * ouvrepar = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R18
		automate.reduction(nouveauSymbole, F, 3);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E36::E36 ( const E36 & unE36 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E36>" << endl;
#endif
} //----- Fin de E36 (constructeur de copie)


E36::E36 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E36>" << endl;
#endif
} //----- Fin de E36


E36::~E36 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E36>" << endl;
#endif
} //----- Fin de ~E36


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
