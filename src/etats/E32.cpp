/*************************************************************************
                           E32  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E32> (fichier E32.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E32.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E32::print() const 
{
	cout << "E32" << endl;
}

bool E32::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case EGAL:
		automate.decalage(s, new E37);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E32::E32 ( const E32 & unE32 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E32>" << endl;
#endif
} //----- Fin de E32 (constructeur de copie)


E32::E32 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E32>" << endl;
#endif
} //----- Fin de E32


E32::~E32 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E32>" << endl;
#endif
} //----- Fin de ~E32


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
