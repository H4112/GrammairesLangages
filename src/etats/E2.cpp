/*************************************************************************
                           E2  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:20
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E2> (fichier E2.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E2.h"
#include "E7.h"
#include "E8.h"
#include "E9.h"
#include "E6.h"

#include "../symboles/Programme.h"
#include "../symboles/PartieDeclarative.h"
#include "../symboles/PartieInstructions.h"


//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E2::Afficher ( ) const 
{
	cout << "E2" << endl;
}

bool E2::Transition ( Automate & automate, Symbole * s )
{
	switch(*s)
	{
		case LIRE:
		{
			automate.Decalage(s, new E7);
			return true;
		}
		case ECRIRE:
		{
			automate.Decalage(s, new E8);
			return true;
		}
		case ID:
		{
			automate.Decalage(s, new E9);
			return true;
		}
		case FIN:
		{
			PartieInstructions * pi = (PartieInstructions *) automate.PopSymbole();
			PartieDeclarative * pd = (PartieDeclarative *) automate.PopSymbole();
			
			Programme * prog = new Programme(pd->GetDeclarations(), pi->GetInstructions());
			
			delete pi;
			delete pd;
			
			//réduire R0
			automate.Reduction(prog, 2);
			
			return true;
		}
		case I:
		{
			automate.Decalage(s, new E6);
			return true;
		}
	}
	
	return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E2::E2 ( const E2 & unE2 )
	: Etat ( unE2 )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <E2>" << endl;
#endif
} //----- Fin de E2 (constructeur de copie)


E2::E2 ( )
	: Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E2>" << endl;
#endif
} //----- Fin de E2


E2::~E2 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E2>" << endl;
#endif
} //----- Fin de ~E2


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
