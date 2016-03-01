/*************************************************************************
                           E3  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:41
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E3> (fichier E3.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E3.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E3::print() const 
{
	cout << "E3" << endl;
}

bool E3::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case POINT_VIRGULE:
		automate.decalage(s, new E10);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E3::E3 ( const E3 & unE3 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E3>" << endl;
#endif
} //----- Fin de E3 (constructeur de copie)


E3::E3 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E3>" << endl;
#endif
} //----- Fin de E3


E3::~E3 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E3>" << endl;
#endif
} //----- Fin de ~E3


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
