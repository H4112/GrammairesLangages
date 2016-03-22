/*************************************************************************
                           E7  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:20
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E7> (fichier E7.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E7.h"
#include "E16.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E7::Afficher ( ) const 
{
	cout << "E7" << endl;
}

bool E7::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case ID:
		{
			automate.Decalage(s, new E16);
			return true;
		}
	}
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E7::E7 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E7>" << endl;
#endif
} //----- Fin de E7


E7::~E7 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E7>" << endl;
#endif
} //----- Fin de ~E7


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
