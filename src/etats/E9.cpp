/*************************************************************************
                           E9  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:20
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E9> (fichier E9.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E9.h"
#include "E23.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E9::Print ( ) const 
{
	cout << "E9" << endl;
}

bool E9::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case AFFECTATION:
		{
			automate.Decalage(s, new E23);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E9::E9 ( const E9 & unE9 )
	: Etat ( unE9 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E9>" << endl;
#endif
} //----- Fin de E9 (constructeur de copie)


E9::E9 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E9>" << endl;
#endif
} //----- Fin de E9


E9::~E9 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E9>" << endl;
#endif
} //----- Fin de ~E9


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
