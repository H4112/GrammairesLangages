/*************************************************************************
                           E22  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E22> (fichier E22.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E22.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E22::Afficher ( ) const 
{
	cout << "E22" << endl;
}

bool E22::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case POINT_VIRGULE:
		case FERMEPAR:
		case OPA:
		case OPM:
		{
			Valeur * val = (Valeur *) automate.PopSymbole();

			ExpressionValeur * exprVal = new ExpressionValeur(*val);
			exprVal->SetIdent(F);
			delete val;
			//réduire R20
			automate.Reduction(exprVal, 1);
			return true;
		}
	}
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E22::E22 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E22>" << endl;
#endif
} //----- Fin de E22

E22::~E22 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E22>" << endl;
#endif
} //----- Fin de ~E22

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
