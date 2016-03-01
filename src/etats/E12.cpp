/*************************************************************************
                           E12  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E12> (fichier E12.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E12.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E12::print() const 
{
	cout << "E12" << endl;
}

bool E12::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case VIRGULE:
	case POINT_VIRGULE:
		Symbole * id = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R6
		automate.reduction(nouveauSymbole, LID, 1);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E12::E12 ( const E12 & unE12 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E12>" << endl;
#endif
} //----- Fin de E12 (constructeur de copie)


E12::E12 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E12>" << endl;
#endif
} //----- Fin de E12


E12::~E12 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E12>" << endl;
#endif
} //----- Fin de ~E12


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
