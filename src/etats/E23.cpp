/*************************************************************************
                           E23  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E23> (fichier E23.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E23.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E23::print() const 
{
	cout << "E23" << endl;
}

bool E23::transition(Automate & automate, Symbole* s)
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
		automate.decalage(s, new E30);
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
E23::E23 ( const E23 & unE23 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E23>" << endl;
#endif
} //----- Fin de E23 (constructeur de copie)


E23::E23 ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E23>" << endl;
#endif
} //----- Fin de E23


E23::~E23 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E23>" << endl;
#endif
} //----- Fin de ~E23


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
