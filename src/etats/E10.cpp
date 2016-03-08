/*************************************************************************
                           E10  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E10> (fichier E10.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E10.h"
#include "../symboles/PartieDeclarative.h"
#include "../Declaration.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E10::Print ( ) const 
{
	cout << "E10" << endl;
}

bool E10::Transition ( Automate & automate, Symbole * s )
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
			//Symbole * point_virgule = 
			delete automate.PopSymbole();
			ListeDeclaration * d = automate.PopSymbole();
			PartieDeclarative * pd = automate.PopSymbole();

			if( ! pd->AjouterDeclarations(d) )
			{
				return false;
			}
			else
			{
				delete d;
				automate.Reduction(pd, 3);
				return true;
			}
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E10::E10 ( const E10 & unE10 )
	: Etat ( unE10 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E10>" << endl;
#endif
} //----- Fin de E10 (constructeur de copie)


E10::E10 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E10>" << endl;
#endif
} //----- Fin de E10


E10::~E10 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E10>" << endl;
#endif
} //----- Fin de ~E10


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
