/*************************************************************************
                           E37  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E37> (fichier E37.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E37.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E37::print() const 
{
	cout << "E37" << endl;
}

bool E37::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case VAL:
		automate.decalage(s, new E38);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E37::E37 ( const E37 & unE37 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E37>" << endl;
#endif
} //----- Fin de E37 (constructeur de copie)


E37::E37 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E37>" << endl;
#endif
} //----- Fin de E37


E37::~E37 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E37>" << endl;
#endif
} //----- Fin de ~E37


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
