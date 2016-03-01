/*************************************************************************
                           E10  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <E10> (fichier E10.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E10.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
void E10::print() const 
{
	cout << "E10" << endl;
}

bool E10::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case VAR:
	case CONST:
	case LIRE:
	case ECRIRE:
	case ID:
	case FIN:
		Symbole * point_virgule = automate.popSymbole();
		Symbole * d = automate.popSymbole();
		Symbole * pd = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R1
		automate.reduction(nouveauSymbole, PD, 3);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
E10::E10 ( const E10 & unE10 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E10>" << endl;
#endif
} //----- Fin de E10 (constructeur de copie)


E10::E10 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E10>" << endl;
#endif
} //----- Fin de E10


E10::~E10 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E10>" << endl;
#endif
} //----- Fin de ~E10


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
