/*************************************************************************
                           E6  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:20
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E6> (fichier E6.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E6.h"
#include "E15.h"
#include "../symboles/PointVirgule.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E6::Afficher ( ) const 
{
	cout << "E6" << endl;
}

bool E6::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case POINT_VIRGULE:
		{
			automate.Decalage(s, new E15);
			return true;
		}
	}
	
	return false;
}

Symbole * E6::Recuperation ( )
{
	return new PointVirgule;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E6::E6 ( const E6 & unE6 )
	: Etat ( unE6 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E6>" << endl;
#endif
} //----- Fin de E6 (constructeur de copie)


E6::E6 ( )
	: Etat ( )
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
