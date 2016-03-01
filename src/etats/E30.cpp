/*************************************************************************
                           E30  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E30> (fichier E30.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E30.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E30::print() const 
{
	cout << "E30" << endl;
}

bool E30::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case POINT_VIRGULE:
		Symbole * e = automate.popSymbole();
		Symbole * affectation = automate.popSymbole();
		Symbole * id = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R13
		automate.reduction(nouveauSymbole, I, 3);
		return true;
	case OPA:
		automate.decalage(s, new E27);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E30::E30 ( const E30 & unE30 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E30>" << endl;
#endif
} //----- Fin de E30 (constructeur de copie)


E30::E30 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E30>" << endl;
#endif
} //----- Fin de E30


E30::~E30 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E30>" << endl;
#endif
} //----- Fin de ~E30


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
