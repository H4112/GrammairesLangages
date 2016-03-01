/*************************************************************************
                           E6  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E6> (fichier E6.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E6.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E6::print() const 
{
	cout << "E6" << endl;
}

bool E6::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case POINT_VIRGULE:
		automate.decalage(s, new E15);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E6::E6 ( const E6 & unE6 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E6>" << endl;
#endif
} //----- Fin de E6 (constructeur de copie)


E6::E6 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E6>" << endl;
#endif
} //----- Fin de E6


E6::~E6 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E6>" << endl;
#endif
} //----- Fin de ~E6


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
