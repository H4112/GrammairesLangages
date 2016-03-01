/*************************************************************************
                           E7  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:17
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E7> (fichier E7.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E7.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E7::print() const 
{
	cout << "E7" << endl;
}

bool E7::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case ID:
		automate.decalage(s, new E16);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E7::E7 ( const E7 & unE7 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E7>" << endl;
#endif
} //----- Fin de E7 (constructeur de copie)


E7::E7 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E7>" << endl;
#endif
} //----- Fin de E7


E7::~E7 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E7>" << endl;
#endif
} //----- Fin de ~E7


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
