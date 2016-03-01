/*************************************************************************
                           E1  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:17
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E1> (fichier E1.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E1.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E1::print() const 
{
	cout << "E1" << endl;
}

bool E1::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case VAR:
		automate.decalage(s, new E4);
		return true;
	case CONST:
		automate.decalage(s, new E5);
		return true;
	case LIRE:
	case ECRIRE:
	case ID:
	case FIN:

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R10
		automate.reduction(nouveauSymbole, PI, 0);
		return true;
	case D:
		automate.decalage(s, new E3);
		return true;
	case PI:
		automate.decalage(s, new E2);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E1::E1 ( const E1 & unE1 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E1>" << endl;
#endif
} //----- Fin de E1 (constructeur de copie)


E1::E1 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E1>" << endl;
#endif
} //----- Fin de E1


E1::~E1 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E1>" << endl;
#endif
} //----- Fin de ~E1


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
