/*************************************************************************
                           E25  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:38:26
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E25> (fichier E25.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E25.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E25::print() const 
{
	cout << "E25" << endl;
}

bool E25::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case ID:
		automate.decalage(s, new E32);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E25::E25 ( const E25 & unE25 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E25>" << endl;
#endif
} //----- Fin de E25 (constructeur de copie)


E25::E25 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E25>" << endl;
#endif
} //----- Fin de E25


E25::~E25 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E25>" << endl;
#endif
} //----- Fin de ~E25


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
