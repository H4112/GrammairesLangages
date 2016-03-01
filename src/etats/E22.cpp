/*************************************************************************
                           E22  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E22> (fichier E22.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E22.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E22::print() const 
{
	cout << "E22" << endl;
}

bool E22::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case POINT_VIRGULE:
	case FERMEPAR:
	case OPA:
	case OPM:
		Symbole * val = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R20
		automate.reduction(nouveauSymbole, F, 1);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E22::E22 ( const E22 & unE22 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E22>" << endl;
#endif
} //----- Fin de E22 (constructeur de copie)


E22::E22 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E22>" << endl;
#endif
} //----- Fin de E22


E22::~E22 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E22>" << endl;
#endif
} //----- Fin de ~E22


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
