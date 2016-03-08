/*************************************************************************
                           E17  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E17> (fichier E17.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E17.h"
#include "E27.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E17::Print ( ) const 
{
	cout << "E17" << endl;
}

bool E17::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case POINT_VIRGULE:
		{
			Symbole * e = automate.PopSymbole();
			Symbole * ecrire = automate.PopSymbole();

			Symbole * nouveauSymbole;
			//TODO remplir cette variable pour réduire R12
			automate.Reduction(nouveauSymbole, 2);
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
E17::E17 ( const E17 & unE17 )
	: Etat ( unE17 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E17>" << endl;
#endif
} //----- Fin de E17 (constructeur de copie)


E17::E17 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E17>" << endl;
#endif
} //----- Fin de E17


E17::~E17 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E17>" << endl;
#endif
} //----- Fin de ~E17


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
