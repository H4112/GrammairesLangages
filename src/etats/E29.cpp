/*************************************************************************
                           E29  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E29> (fichier E29.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E29.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E29::print() const 
{
	cout << "E29" << endl;
}

bool E29::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case FERMEPAR:
		automate.decalage(s, new E36);
		return true;
	case OPA:
		automate.decalage(s, new E27);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E29::E29 ( const E29 & unE29 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E29>" << endl;
#endif
} //----- Fin de E29 (constructeur de copie)


E29::E29 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E29>" << endl;
#endif
} //----- Fin de E29


E29::~E29 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E29>" << endl;
#endif
} //----- Fin de ~E29


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
