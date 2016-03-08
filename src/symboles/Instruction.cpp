/*************************************************************************
                           Instruction  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Instruction> (fichier Instruction.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Instruction.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Instruction::Executer( map < string, Declaration * > tableDeclarations )
{
	//TODO
}

void Instruction::Simplifier( map < string, Declaration * > tableDeclarations )
{
	//TODO
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Instruction::Instruction ( const Instruction & unInstruction ) 
	: Symbole(unInstruction)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Instruction>" << endl;
#endif
} //----- Fin de Instruction (constructeur de copie)


Instruction::Instruction ( ) 
	: Symbole("RIEN", I, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <Instruction>" << endl;
#endif
} //----- Fin de Instruction


Instruction::~Instruction ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Instruction>" << endl;
#endif
} //----- Fin de ~Instruction


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
