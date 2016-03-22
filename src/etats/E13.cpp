/*************************************************************************
                           E13  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E13> (fichier E13.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E13.h"
#include "E25.h"
#include "../symboles/ListeDeclaration.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E13::Afficher ( ) const 
{
	cout << "E13" << endl;
}

bool E13::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case VIRGULE:
		{
			automate.Decalage(s, new E25);
			return true;
		}
		case POINT_VIRGULE:
		{
			ListeIdentifiantsValeurs * lidv = (ListeIdentifiantsValeurs *) automate.PopSymbole();
			lidv->SetIdent(D);
			//Symbole * constante = 
			delete automate.PopSymbole();

			//réduire R4
			automate.Reduction(lidv, 2);
			return true;
		}
	}
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E13::E13 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E13>" << endl;
#endif
} //----- Fin de E13

E13::~E13 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E13>" << endl;
#endif
} //----- Fin de ~E13


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
