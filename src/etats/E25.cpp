/*************************************************************************
                           E25  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E25> (fichier E25.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E25.h"
#include "E32.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E25::Afficher ( ) const 
{
	cout << "E25" << endl;
}

bool E25::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case ID:
		{
			automate.Decalage(s, new E32);
			return true;
		}
	}
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E25::E25 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E25>" << endl;
#endif
} //----- Fin de E25

E25::~E25 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E25>" << endl;
#endif
} //----- Fin de ~E25

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
