/*************************************************************************
                           E0  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:41
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E0> (fichier E0.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E0.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E0::print() const 
{
	cout << "E0" << endl;
}

bool E0::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case VAR:
	case CONST:
	case LIRE:
	case ECRIRE:
	case ID:
	case FIN:

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R2
		automate.reduction(nouveauSymbole, PD, 0);
		return true;
	case PD:
		automate.decalage(s, new E1);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E0::E0 ( const E0 & unE0 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E0>" << endl;
#endif
} //----- Fin de E0 (constructeur de copie)


E0::E0 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E0>" << endl;
#endif
} //----- Fin de E0


E0::~E0 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E0>" << endl;
#endif
} //----- Fin de ~E0


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
