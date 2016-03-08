/*************************************************************************
                           E35  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E35> (fichier E35.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E35.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E35::Print ( ) const 
{
	cout << "E35" << endl;
}

bool E35::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case POINT_VIRGULE:
		case FERMEPAR:
		case OPA:
		case OPM:
		{
			Symbole * f = automate.PopSymbole();
			Symbole * opm = automate.PopSymbole();
			Symbole * t = automate.PopSymbole();

			Symbole * nouveauSymbole;
			//TODO remplir cette variable pour réduire R16
			automate.Reduction(nouveauSymbole, 3);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E35::E35 ( const E35 & unE35 )
	: Etat ( unE35 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E35>" << endl;
#endif
} //----- Fin de E35 (constructeur de copie)


E35::E35 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E35>" << endl;
#endif
} //----- Fin de E35


E35::~E35 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E35>" << endl;
#endif
} //----- Fin de ~E35


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
