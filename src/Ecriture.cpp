/*************************************************************************
                           Ecriture  -  Instruction d'écriture
                             -------------------
    début                : 15/03/2016
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Ecriture> (fichier Ecriture.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Ecriture.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Ecriture::Executer( map < string, Declaration * > & tableDeclarations )
{
	int result = expression->Evaluer(tableDeclarations);
	
	cout << result << endl;
}

void Ecriture::Simplifier( map < string, Declaration * > & tableDeclarations )
{
	expression->Simplifier(tableDeclarations);
}


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
Ecriture::Ecriture ( const Ecriture & unEcriture )
	: Instruction ( unEcriture ), expression ( unEcriture.expression )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Ecriture>" << endl;
#endif
} //----- Fin de Ecriture (constructeur de copie)


Ecriture::Ecriture ( Expression * expr )
	: Instruction ( ), expression ( expr )
{
#ifdef MAP
    cout << "Appel au constructeur de <Ecriture>" << endl;
#endif
} //----- Fin de Ecriture


Ecriture::~Ecriture ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Ecriture>" << endl;
#endif
} //----- Fin de ~Ecriture


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées