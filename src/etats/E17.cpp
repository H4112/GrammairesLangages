/*************************************************************************
                           E17  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E17> (fichier E17.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E17.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E17::print() const 
{
	cout << "E17" << endl;
}

bool E17::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case POINT_VIRGULE:
		Symbole * e = automate.popSymbole();
		Symbole * ecrire = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R12
		automate.reduction(nouveauSymbole, I, 2);
		return true;
	case OPA:
		automate.decalage(s, new E27);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E17::E17 ( const E17 & unE17 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E17>" << endl;
#endif
} //----- Fin de E17 (constructeur de copie)


E17::E17 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E17>" << endl;
#endif
} //----- Fin de E17


E17::~E17 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E17>" << endl;
#endif
} //----- Fin de ~E17


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
