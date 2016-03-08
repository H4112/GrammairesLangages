/*************************************************************************
                           E20  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E20> (fichier E20.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E20.h"
#include "E20.h"
#include "E21.h"
#include "E22.h"
#include "E29.h"
#include "E18.h"
#include "E19.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E20::Print ( ) const 
{
	cout << "E20" << endl;
}

bool E20::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case OUVREPAR:
		{
			automate.Decalage(s, new E20);
			return true;
		}
		case ID:
		{
			automate.Decalage(s, new E21);
			return true;
		}
		case VAL:
		{
			automate.Decalage(s, new E22);
			return true;
		}
		case E:
		{
			automate.Decalage(s, new E29);
			return true;
		}
		case T:
		{
			automate.Decalage(s, new E18);
			return true;
		}
		case F:
		{
			automate.Decalage(s, new E19);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E20::E20 ( const E20 & unE20 )
	: Etat ( unE20 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E20>" << endl;
#endif
} //----- Fin de E20 (constructeur de copie)


E20::E20 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E20>" << endl;
#endif
} //----- Fin de E20


E20::~E20 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E20>" << endl;
#endif
} //----- Fin de ~E20


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
