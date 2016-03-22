/*************************************************************************
                           E28  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E28> (fichier E28.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E28.h"
#include "E20.h"
#include "E21.h"
#include "E22.h"
#include "E35.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E28::Afficher ( ) const 
{
	cout << "E28" << endl;
}

bool E28::Transition ( Automate & automate, Symbole * s )
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
		case F:
		{
			automate.Decalage(s, new E35);
			return true;
		}
	}
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E28::E28 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E28>" << endl;
#endif
} //----- Fin de E28

E28::~E28 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E28>" << endl;
#endif
} //----- Fin de ~E28

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
