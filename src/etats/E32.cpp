/*************************************************************************
                           E32  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E32> (fichier E32.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E32.h"
#include "E37.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E32::Afficher ( ) const 
{
	cout << "E32" << endl;
}

bool E32::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case EGAL:
		{
			automate.Decalage(s, new E37);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E32::E32 ( const E32 & unE32 )
	: Etat ( unE32 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E32>" << endl;
#endif
} //----- Fin de E32 (constructeur de copie)


E32::E32 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E32>" << endl;
#endif
} //----- Fin de E32


E32::~E32 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E32>" << endl;
#endif
} //----- Fin de ~E32


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
