/*************************************************************************
                           E28  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E28> (fichier E28.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E28.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E28::print() const 
{
	cout << "E28" << endl;
}

bool E28::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case OUVREPAR:
		automate.decalage(s, new E20);
		return true;
	case ID:
		automate.decalage(s, new E21);
		return true;
	case VAL:
		automate.decalage(s, new E22);
		return true;
	case F:
		automate.decalage(s, new E35);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E28::E28 ( const E28 & unE28 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E28>" << endl;
#endif
} //----- Fin de E28 (constructeur de copie)


E28::E28 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E28>" << endl;
#endif
} //----- Fin de E28


E28::~E28 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E28>" << endl;
#endif
} //----- Fin de ~E28


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
