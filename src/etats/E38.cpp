/*************************************************************************
                           E38  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E38> (fichier E38.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E38.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E38::Print ( ) const 
{
	cout << "E38" << endl;
}

bool E38::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case VIRGULE:
		case POINT_VIRGULE:
		{
			Symbole * val = automate.PopSymbole();
			Symbole * egal = automate.PopSymbole();
			Symbole * id = automate.PopSymbole();
			Symbole * virgule = automate.PopSymbole();
			Symbole * lidv = automate.PopSymbole();

			Symbole * nouveauSymbole;
			//TODO remplir cette variable pour réduire R7
			automate.Reduction(nouveauSymbole, 5);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E38::E38 ( const E38 & unE38 )
	: Etat ( unE38 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E38>" << endl;
#endif
} //----- Fin de E38 (constructeur de copie)


E38::E38 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E38>" << endl;
#endif
} //----- Fin de E38


E38::~E38 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E38>" << endl;
#endif
} //----- Fin de ~E38


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
