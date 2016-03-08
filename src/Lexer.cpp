/*************************************************************************
                           Automate  -  Automate de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Automate> (fichier Automate.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
    
using namespace std;

//------------------------------------------------------ Include personnel
#include "Automate.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Automate::reduction ( Symbole * symboleEmpile, int nbDepile )
{
	//TODO
}

void Automate::decalage ( Symbole * symboleEmpile, Etat * etatEmpile )
{
	//TODO
}

Symbole * Automate::popSymbole ( )
{
	return pileSymboles.pop();
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Automate::Automate ( const Automate & unAutomate )
    : pileSymboles ( unAutomate.pileSymboles ),
      pileEtats ( unAutomate.pileEtats )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Automate>" << endl;
#endif
} //----- Fin de Automate (constructeur de copie)


Automate::Automate ( string nomFichier ) : lexer ( nomFichier )
{
#ifdef MAP
    cout << "Appel au constructeur de <Automate>" << endl;
#endif
} //----- Fin de Automate


Automate::~Automate ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Automate>" << endl;
#endif
} //----- Fin de ~Automate

int main()
{
    //TODO c'est pour que ça compile
	cout << "foo" << endl;
    return 0;
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées