/*************************************************************************
                           E21  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:12
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E21> (fichier E21.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E21.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E21::print() const 
{
	cout << "E21" << endl;
}

bool E21::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
		case POINT_VIRGULE:
		case FERMEPAR:
		case OPA:
		case OPM:
		{
			Symbole * id = automate.popSymbole();

			Symbole * nouveauSymbole;
			//TODO remplir cette variable pour réduire R19
			automate.reduction(nouveauSymbole, 1);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E21::E21 ( const E21 & unE21 )
	: Etat(unE21)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E21>" << endl;
#endif
} //----- Fin de E21 (constructeur de copie)


E21::E21 ( )
	: Etat()
{
#ifdef MAP
    cout << "Appel au constructeur de <E21>" << endl;
#endif
} //----- Fin de E21


E21::~E21 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E21>" << endl;
#endif
} //----- Fin de ~E21


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
