/*************************************************************************
                           E8  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:17
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E8> (fichier E8.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E8.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E8::print() const 
{
	cout << "E8" << endl;
}

bool E8::transition(Automate & automate, Symbole* s)
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
		automate.decalage(s, new E17);
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
E8::E8 ( const E8 & unE8 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E8>" << endl;
#endif
} //----- Fin de E8 (constructeur de copie)


E8::E8 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E8>" << endl;
#endif
} //----- Fin de E8


E8::~E8 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E8>" << endl;
#endif
} //----- Fin de ~E8


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
