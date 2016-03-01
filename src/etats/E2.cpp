/*************************************************************************
                           E2  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:41
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E2> (fichier E2.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E2.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E2::print() const 
{
	cout << "E2" << endl;
}

bool E2::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case LIRE:
		automate.decalage(s, new E7);
		return true;
	case ECRIRE:
		automate.decalage(s, new E8);
		return true;
	case ID:
		automate.decalage(s, new E9);
		return true;
	case FIN:
		//TODO A
		return true;
	case I:
		automate.decalage(s, new E6);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E2::E2 ( const E2 & unE2 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E2>" << endl;
#endif
} //----- Fin de E2 (constructeur de copie)


E2::E2 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E2>" << endl;
#endif
} //----- Fin de E2


E2::~E2 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E2>" << endl;
#endif
} //----- Fin de ~E2


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
