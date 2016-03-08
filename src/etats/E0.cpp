/*************************************************************************
                           E0  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:20
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E0> (fichier E0.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E0.h"
#include "E1.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E0::Print ( ) const 
{
	cout << "E0" << endl;
}

bool E0::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case VAR:
		case CONST:
		case LIRE:
		case ECRIRE:
		case ID:
		case FIN:
		{

			Symbole * nouveauSymbole;
			//TODO remplir cette variable pour réduire R2
			automate.Reduction(nouveauSymbole, 0);
			return true;
		}
		case PD:
		{
			automate.Decalage(s, new E1);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E0::E0 ( const E0 & unE0 )
	: Etat ( unE0 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E0>" << endl;
#endif
} //----- Fin de E0 (constructeur de copie)


E0::E0 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E0>" << endl;
#endif
} //----- Fin de E0


E0::~E0 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E0>" << endl;
#endif
} //----- Fin de ~E0


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
