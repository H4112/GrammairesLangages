/*************************************************************************
                           E38  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E38> (fichier E38.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E38.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E38::print() const 
{
	cout << "E38" << endl;
}

bool E38::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case VIRGULE:
	case POINT_VIRGULE:
		Symbole * val = automate.popSymbole();
		Symbole * egal = automate.popSymbole();
		Symbole * id = automate.popSymbole();
		Symbole * virgule = automate.popSymbole();
		Symbole * lidv = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R7
		automate.reduction(nouveauSymbole, LIDV, 5);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E38::E38 ( const E38 & unE38 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E38>" << endl;
#endif
} //----- Fin de E38 (constructeur de copie)


E38::E38 ( )
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

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
