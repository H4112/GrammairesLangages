/*************************************************************************
                           E34  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E34> (fichier E34.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E34.h"
#include "E28.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E34::Afficher ( ) const 
{
	cout << "E34" << endl;
}

bool E34::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case POINT_VIRGULE:
		case FERMEPAR:
		case OPA:
		{
			Expression * t = (Expression *) automate.PopSymbole();
			OperateurAdd * opa = (OperateurAdd *) automate.PopSymbole();
			Expression * e = (Expression *) automate.PopSymbole();

			ExpressionBinaire * eb;
			if(opa->GetNom() == "+")
			{
				eb = new ExpressionAddition(e,t);
			}
			else
			{
				eb = new ExpressionSoustraction(e,t);
			}
			eb->SetIdent(E);
			delete opa;
			//réduire R14
			automate.Reduction(eb, 3);
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
E34::E34 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E34>" << endl;
#endif
} //----- Fin de E34


E34::~E34 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E34>" << endl;
#endif
} //----- Fin de ~E34


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
