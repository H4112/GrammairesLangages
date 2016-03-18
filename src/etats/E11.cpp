/*************************************************************************
                           E11  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E11> (fichier E11.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E11.h"
#include "E24.h"

#include "../symboles/ListeDeclaration.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E11::Print ( ) const 
{
	cout << "E11" << endl;
}

bool E11::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case VIRGULE:
		{
			automate.Decalage(s, new E24);
			return true;
		}
		case POINT_VIRGULE:
		{
			ListeIdentifiants * lid = (ListeIdentifiants *) automate.PopSymbole();
			ListeDeclaration * d = new ListeDeclaration(*lid);
			delete lid;
			//Symbole * var = 
			delete automate.PopSymbole();

			//réduire R3
			automate.Reduction(d, 2);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E11::E11 ( const E11 & unE11 )
	: Etat ( unE11 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E11>" << endl;
#endif
} //----- Fin de E11 (constructeur de copie)


E11::E11 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E11>" << endl;
#endif
} //----- Fin de E11


E11::~E11 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E11>" << endl;
#endif
} //----- Fin de ~E11


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
