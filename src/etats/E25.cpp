/*************************************************************************
                           E25  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E25> (fichier E25.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E25.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E25::print() const 
{
	cout << "E25" << endl;
}

bool E25::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case ID:
		automate.decalage(s, new E32);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E25::E25 ( const E25 & unE25 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E25>" << endl;
#endif
} //----- Fin de E25 (constructeur de copie)


E25::E25 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E25>" << endl;
#endif
} //----- Fin de E25


E25::~E25 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E25>" << endl;
#endif
} //----- Fin de ~E25


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
