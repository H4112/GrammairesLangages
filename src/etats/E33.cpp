/*************************************************************************
                           E33  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E33> (fichier E33.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E33.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E33::print() const 
{
	cout << "E33" << endl;
}

bool E33::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case VIRGULE:
	case POINT_VIRGULE:
		Symbole * val = automate.popSymbole();
		Symbole * egal = automate.popSymbole();
		Symbole * id = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R8
		automate.reduction(nouveauSymbole, LIDV, 3);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E33::E33 ( const E33 & unE33 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E33>" << endl;
#endif
} //----- Fin de E33 (constructeur de copie)


E33::E33 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E33>" << endl;
#endif
} //----- Fin de E33


E33::~E33 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E33>" << endl;
#endif
} //----- Fin de ~E33


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
