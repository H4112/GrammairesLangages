/*************************************************************************
                           E4  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:20
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E4> (fichier E4.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E4.h"
#include "E12.h"
#include "E11.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E4::Afficher ( ) const 
{
	cout << "E4" << endl;
}

bool E4::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case ID:
		{
			automate.Decalage(s, new E12);
			return true;
		}
		case LID:
		{
			automate.Decalage(s, new E11);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E4::E4 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E4>" << endl;
#endif
} //----- Fin de E4


E4::~E4 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E4>" << endl;
#endif
} //----- Fin de ~E4


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
