/*************************************************************************
                           E20  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:38:26
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E20> (fichier E20.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E20.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E20::print() const 
{
	cout << "E20" << endl;
}

bool E20::transition(Automate & automate, Symbole* s)
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
	case E:
		automate.decalage(s, new E29);
		return true;
	case T:
		automate.decalage(s, new E18);
		return true;
	case F:
		automate.decalage(s, new E19);
		return true;
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E20::E20 ( const E20 & unE20 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E20>" << endl;
#endif
} //----- Fin de E20 (constructeur de copie)


E20::E20 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E20>" << endl;
#endif
} //----- Fin de E20


E20::~E20 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E20>" << endl;
#endif
} //----- Fin de ~E20


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
