/*************************************************************************
                           E24  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E24> (fichier E24.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E24.h"
#include "E31.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E24::Afficher ( ) const 
{
	cout << "E24" << endl;
}

bool E24::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case ID:
		{
			automate.Decalage(s, new E31);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E24::E24 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E24>" << endl;
#endif
} //----- Fin de E24

E24::~E24 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E24>" << endl;
#endif
} //----- Fin de ~E24

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
