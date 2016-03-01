/*************************************************************************
                           E9  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E9> (fichier E9.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E9.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E9::print() const 
{
	cout << "E9" << endl;
}

bool E9::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case AFFECTATION:
		automate.decalage(s, new E23);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E9::E9 ( const E9 & unE9 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E9>" << endl;
#endif
} //----- Fin de E9 (constructeur de copie)


E9::E9 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E9>" << endl;
#endif
} //----- Fin de E9


E9::~E9 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E9>" << endl;
#endif
} //----- Fin de ~E9


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
