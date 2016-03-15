/*************************************************************************
                           Affectation  -  Instruction
                             -------------------
    début                : 15/03/2016 11:22:07
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---- Réalisation de la classe <Affectation> (fichier Affectation.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Affectation.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Affectation::Executer( map < string, Declaration * > & tableDeclarations )
{
	((Variable*)tableDeclarations[nomVariable])->Affecter(expression->Evaluer(tableDeclarations));
}

void Affectation::Simplifier( map < string, Declaration * > & tableDeclarations )
{
	expression->Simplifier(tableDeclarations);
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Affectation::Affectation ( const Affectation & unAffectation )
	: Instruction ( unAffectation )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Affectation>" << endl;
#endif
} //----- Fin de Affectation (constructeur de copie)


Affectation::Affectation ( string nomVar, Expression * expr )
	: Instruction ( ), nomVariable(nomVar), expression(expr)
{
#ifdef MAP
    cout << "Appel au constructeur de <Affectation>" << endl;
#endif
} //----- Fin de Affectation


Affectation::~Affectation ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Affectation>" << endl;
#endif
} //----- Fin de ~Affectation


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées