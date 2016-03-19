/*************************************************************************
                           E18  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E18> (fichier E18.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E18.h"
#include "E28.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E18::Print ( ) const 
{
	cout << "E18" << endl;
}

bool E18::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case POINT_VIRGULE:
		case FERMEPAR:
		case OPA:
		{
			Expression * t = (Expression *)automate.PopSymbole();
			t->SetIdent(E);
			//réduire R15
			automate.Reduction(t, 1);
			return true;
		}
		case OPM:
		{
			automate.Decalage(s, new E28);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E18::E18 ( const E18 & unE18 )
	: Etat ( unE18 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E18>" << endl;
#endif
} //----- Fin de E18 (constructeur de copie)


E18::E18 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E18>" << endl;
#endif
} //----- Fin de E18


E18::~E18 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E18>" << endl;
#endif
} //----- Fin de ~E18


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
