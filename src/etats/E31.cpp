/*************************************************************************
                           E31  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E31> (fichier E31.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

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
		Symbole * id = automate.popSymbole();
		Symbole * virgule = automate.popSymbole();
		Symbole * lid = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R5
		automate.reduction(nouveauSymbole, LID, 3);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E31::E31 ( const E31 & unE31 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E31>" << endl;
#endif
} //----- Fin de E31 (constructeur de copie)


E31::E31 ( )
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
