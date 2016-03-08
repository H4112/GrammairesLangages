/*************************************************************************
                           E3  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:20
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E3> (fichier E3.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E3.h"
#include "E10.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E3::Print ( ) const 
{
	cout << "E3" << endl;
}

bool E3::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case POINT_VIRGULE:
		{
			automate.Decalage(s, new E10);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E3::E3 ( const E3 & unE3 )
	: Etat ( unE3 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E3>" << endl;
#endif
} //----- Fin de E3 (constructeur de copie)


E3::E3 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E3>" << endl;
#endif
} //----- Fin de E3


E3::~E3 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E3>" << endl;
#endif
} //----- Fin de ~E3


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
