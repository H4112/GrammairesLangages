/*************************************************************************
                           E5  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:20
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E5> (fichier E5.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E5.h"
#include "E14.h"
#include "E13.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E5::Print ( ) const 
{
	cout << "E5" << endl;
}

bool E5::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case ID:
		{
			automate.Decalage(s, new E14);
			return true;
		}
		case LIDV:
		{
			automate.Decalage(s, new E13);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E5::E5 ( const E5 & unE5 )
	: Etat ( unE5 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E5>" << endl;
#endif
} //----- Fin de E5 (constructeur de copie)


E5::E5 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E5>" << endl;
#endif
} //----- Fin de E5


E5::~E5 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E5>" << endl;
#endif
} //----- Fin de ~E5


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
