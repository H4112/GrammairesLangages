/*************************************************************************
                           E14  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E14> (fichier E14.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E14.h"
#include "E26.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E14::Afficher ( ) const 
{
	cout << "E14" << endl;
}

bool E14::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case EGAL:
		{
			automate.Decalage(s, new E26);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E14::E14 ( const E14 & unE14 )
	: Etat ( unE14 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E14>" << endl;
#endif
} //----- Fin de E14 (constructeur de copie)


E14::E14 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E14>" << endl;
#endif
} //----- Fin de E14


E14::~E14 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E14>" << endl;
#endif
} //----- Fin de ~E14


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
