/*************************************************************************
                           E15  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E15> (fichier E15.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E15.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E15::print() const 
{
	cout << "E15" << endl;
}

bool E15::transition(Automate & automate, Symbole* s)
{
	switch(*s)
	{
	case LIRE:
	case ECRIRE:
	case ID:
	case FIN:
		Symbole * point_virgule = automate.popSymbole();
		Symbole * i = automate.popSymbole();
		Symbole * pi = automate.popSymbole();

		Symbole * nouveauSymbole;
		//TODO remplir cette variable pour r�duire R9
		automate.reduction(nouveauSymbole, PI, 3);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E15::E15 ( const E15 & unE15 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E15>" << endl;
#endif
} //----- Fin de E15 (constructeur de copie)


E15::E15 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E15>" << endl;
#endif
} //----- Fin de E15


E15::~E15 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E15>" << endl;
#endif
} //----- Fin de ~E15


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
