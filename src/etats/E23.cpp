/*************************************************************************
                           E23  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E23> (fichier E23.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E23.h"
#include "E20.h"
#include "E21.h"
#include "E22.h"
#include "E30.h"
#include "E18.h"
#include "E19.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E23::Print ( ) const 
{
	cout << "E23" << endl;
}

bool E23::Transition ( Automate & automate, Symbole * s )
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
			automate.Decalage(s, new E30);
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
E23::E23 ( const E23 & unE23 )
	: Etat ( unE23 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E23>" << endl;
#endif
} //----- Fin de E23 (constructeur de copie)


E23::E23 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E23>" << endl;
#endif
} //----- Fin de E23


E23::~E23 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E23>" << endl;
#endif
} //----- Fin de ~E23


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
