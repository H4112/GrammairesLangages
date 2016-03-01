/*************************************************************************
                           E37  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:30:18
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E37> (fichier E37.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "E37.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
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

//------------------------------------------------- Surcharge d'opérateurs

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

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
