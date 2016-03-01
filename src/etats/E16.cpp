/*************************************************************************
                           E16  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E16> (fichier E16.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E16.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E16::print() const 
{
	cout << "E16" << endl;
}

bool E16::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case POINT_VIRGULE:
		Symbole * id = automate.popSymbole();
		Symbole * lire = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R11
		automate.reduction(nouveauSymbole, I, 2);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E16::E16 ( const E16 & unE16 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E16>" << endl;
#endif
} //----- Fin de E16 (constructeur de copie)


E16::E16 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E16>" << endl;
#endif
} //----- Fin de E16


E16::~E16 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E16>" << endl;
#endif
} //----- Fin de ~E16


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
