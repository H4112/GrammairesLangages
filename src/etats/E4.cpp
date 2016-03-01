/*************************************************************************
                           E4  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:41
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E4> (fichier E4.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E4.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E4::print() const 
{
	cout << "E4" << endl;
}

bool E4::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case ID:
		automate.decalage(s, new E12);
		return true;
	case LID:
		automate.decalage(s, new E11);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E4::E4 ( const E4 & unE4 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E4>" << endl;
#endif
} //----- Fin de E4 (constructeur de copie)


E4::E4 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E4>" << endl;
#endif
} //----- Fin de E4


E4::~E4 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E4>" << endl;
#endif
} //----- Fin de ~E4


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
