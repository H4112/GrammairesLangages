/*************************************************************************
                           E27  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:38:26
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E27> (fichier E27.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E27.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E27::print() const 
{
	cout << "E27" << endl;
}

bool E27::transition(Automate & automate, Symbole* s)
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
	case T:
		automate.decalage(s, new E34);
		return true;
	case F:
		automate.decalage(s, new E19);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E27::E27 ( const E27 & unE27 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E27>" << endl;
#endif
} //----- Fin de E27 (constructeur de copie)


E27::E27 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E27>" << endl;
#endif
} //----- Fin de E27


E27::~E27 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E27>" << endl;
#endif
} //----- Fin de ~E27


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
