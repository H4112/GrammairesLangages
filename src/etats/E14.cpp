/*************************************************************************
                           E14  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E14> (fichier E14.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E14.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E14::print() const 
{
	cout << "E14" << endl;
}

bool E14::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case EGAL:
		automate.decalage(s, new E26);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E14::E14 ( const E14 & unE14 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E14>" << endl;
#endif
} //----- Fin de E14 (constructeur de copie)


E14::E14 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E14>" << endl;
#endif
} //----- Fin de E14


E14::~E14 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E14>" << endl;
#endif
} //----- Fin de ~E14


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
