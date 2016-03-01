/*************************************************************************
                           E24  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E24> (fichier E24.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E24.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E24::print() const 
{
	cout << "E24" << endl;
}

bool E24::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case ID:
		automate.decalage(s, new E31);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E24::E24 ( const E24 & unE24 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E24>" << endl;
#endif
} //----- Fin de E24 (constructeur de copie)


E24::E24 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E24>" << endl;
#endif
} //----- Fin de E24


E24::~E24 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E24>" << endl;
#endif
} //----- Fin de ~E24


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
