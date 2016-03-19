/*************************************************************************
                           E1  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:20
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E1> (fichier E1.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E1.h"
#include "E4.h"
#include "E5.h"
#include "E3.h"
#include "E2.h"
#include "../symboles/PartieInstructions.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E1::Afficher ( ) const 
{
	cout << "E1" << endl;
}

bool E1::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case VAR:
		{
			automate.Decalage(s, new E4);
			return true;
		}
		case CONST:
		{
			automate.Decalage(s, new E5);
			return true;
		}
		case LIRE:
		case ECRIRE:
		case ID:
		case FIN:
		{
			automate.Reduction(new PartieInstructions, 0);
			return true;
		}
		case D:
		{
			automate.Decalage(s, new E3);
			return true;
		}
		case PI:
		{
			automate.Decalage(s, new E2);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E1::E1 ( const E1 & unE1 )
	: Etat ( unE1 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E1>" << endl;
#endif
} //----- Fin de E1 (constructeur de copie)


E1::E1 ( )
	: Etat ( )
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
