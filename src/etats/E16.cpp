/*************************************************************************
                           E16  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E16> (fichier E16.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E16.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E16::Print ( ) const 
{
	cout << "E16" << endl;
}

bool E16::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case POINT_VIRGULE:
		{
			Symbole * id = automate.PopSymbole();
			Symbole * lire = automate.PopSymbole();

			Symbole * nouveauSymbole;
			//TODO remplir cette variable pour réduire R11
			automate.Reduction(nouveauSymbole, 2);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E16::E16 ( const E16 & unE16 )
	: Etat ( unE16 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E16>" << endl;
#endif
} //----- Fin de E16 (constructeur de copie)


E16::E16 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E16>" << endl;
#endif
} //----- Fin de E16


E16::~E16 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E16>" << endl;
#endif
} //----- Fin de ~E16


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
