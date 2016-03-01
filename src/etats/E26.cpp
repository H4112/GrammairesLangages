/*************************************************************************
                           E26  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E26> (fichier E26.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E26.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E26::print() const 
{
	cout << "E26" << endl;
}

bool E26::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case VAL:
		automate.decalage(s, new E33);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E26::E26 ( const E26 & unE26 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E26>" << endl;
#endif
} //----- Fin de E26 (constructeur de copie)


E26::E26 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E26>" << endl;
#endif
} //----- Fin de E26


E26::~E26 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E26>" << endl;
#endif
} //----- Fin de ~E26


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
