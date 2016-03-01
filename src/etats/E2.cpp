/*************************************************************************
                           E2  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 18:29:02
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E2> (fichier E2.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E2.h"
#include "E7.h"
#include "E8.h"
#include "E9.h"
#include "E6.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E2::print() const 
{
	cout << "E2" << endl;
}

bool E2::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
		case LIRE:
		{
		automate.decalage(s, new E7);
			return true;
		}
		case ECRIRE:
		{
		automate.decalage(s, new E8);
			return true;
		}
		case ID:
		{
		automate.decalage(s, new E9);
			return true;
		}
		case FIN:
		{
			//TODO A
			return true;
		}
		case I:
		{
		automate.decalage(s, new E6);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E2::E2 ( const E2 & unE2 )
	: Etat(unE2)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E2>" << endl;
#endif
} //----- Fin de E2 (constructeur de copie)


E2::E2 ( )
	: Etat()
{
#ifdef MAP
    cout << "Appel au constructeur de <E2>" << endl;
#endif
} //----- Fin de E2


E2::~E2 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E2>" << endl;
#endif
} //----- Fin de ~E2


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
