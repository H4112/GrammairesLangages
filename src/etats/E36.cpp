/*************************************************************************
                           E36  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E36> (fichier E36.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E36.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E36::print() const 
{
	cout << "E36" << endl;
}

bool E36::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case POINT_VIRGULE:
	case FERMEPAR:
	case OPA:
	case OPM:
		Symbole * fermepar = automate.popSymbole();
		Symbole * e = automate.popSymbole();
		Symbole * ouvrepar = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R18
		automate.reduction(nouveauSymbole, F, 3);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E36::E36 ( const E36 & unE36 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E36>" << endl;
#endif
} //----- Fin de E36 (constructeur de copie)


E36::E36 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E36>" << endl;
#endif
} //----- Fin de E36


E36::~E36 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E36>" << endl;
#endif
} //----- Fin de ~E36


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
