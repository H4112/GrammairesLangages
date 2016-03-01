/*************************************************************************
                           E13  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E13> (fichier E13.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E13.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E13::print() const 
{
	cout << "E13" << endl;
}

bool E13::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case VIRGULE:
		automate.decalage(s, new E25);
		return true;
	case POINT_VIRGULE:
		Symbole * lidv = automate.popSymbole();
		Symbole * const = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R4
		automate.reduction(nouveauSymbole, D, 2);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E13::E13 ( const E13 & unE13 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E13>" << endl;
#endif
} //----- Fin de E13 (constructeur de copie)


E13::E13 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E13>" << endl;
#endif
} //----- Fin de E13


E13::~E13 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E13>" << endl;
#endif
} //----- Fin de ~E13


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
