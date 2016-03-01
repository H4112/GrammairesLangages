/*************************************************************************
                           E6  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 18:29:02
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E6> (fichier E6.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E6.h"
#include "E15.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E6::print() const 
{
	cout << "E6" << endl;
}

bool E6::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
		case POINT_VIRGULE:
		{
		automate.decalage(s, new E15);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E6::E6 ( const E6 & unE6 )
	: Etat(unE6)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E6>" << endl;
#endif
} //----- Fin de E6 (constructeur de copie)


E6::E6 ( )
	: Etat()
{
#ifdef MAP
    cout << "Appel au constructeur de <E6>" << endl;
#endif
} //----- Fin de E6


E6::~E6 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E6>" << endl;
#endif
} //----- Fin de ~E6


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
