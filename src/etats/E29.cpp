/*************************************************************************
                           E29  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E29> (fichier E29.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E29.h"
#include "E36.h"
#include "E27.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E29::Afficher ( ) const 
{
	cout << "E29" << endl;
}

bool E29::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case FERMEPAR:
		{
			automate.Decalage(s, new E36);
			return true;
		}
		case OPA:
		{
			automate.Decalage(s, new E27);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E29::E29 ( const E29 & unE29 )
	: Etat ( unE29 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E29>" << endl;
#endif
} //----- Fin de E29 (constructeur de copie)


E29::E29 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E29>" << endl;
#endif
} //----- Fin de E29


E29::~E29 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E29>" << endl;
#endif
} //----- Fin de ~E29


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
