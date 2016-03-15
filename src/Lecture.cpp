/*************************************************************************
                           Lecture  -  Instruction de lecture
                             -------------------
    début                : 15/03/2016
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Lecture> (fichier Lecture.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Lecture.h"
#include "Variable.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Lecture::Executer( map < string, Declaration * > & tableDeclarations )
{
	int nb;
	cin >> nb;
	
	//on devrait avoir vérifié que la déclaration est bien une variable
	//et non une constante au niveau de l'analyse statique
	Variable * variable = (Variable *) tableDeclarations[nomVariable];
	variable->AffecterValeur(nb);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
void Lecture::Simplifier( map < string, Declaration * > & tableDeclarations )
{
	//rien à faire
}
#pragma GCC diagnostic pop


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
Lecture::Lecture ( const Lecture & unLecture )
	: Instruction ( unLecture ), nomVariable ( unLecture.nomVariable )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Lecture>" << endl;
#endif
} //----- Fin de Lecture (constructeur de copie)


Lecture::Lecture ( string nom )
	: Instruction ( ), nomVariable ( nom )
{
#ifdef MAP
    cout << "Appel au constructeur de <Lecture>" << endl;
#endif
} //----- Fin de Lecture


Lecture::~Lecture ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Lecture>" << endl;
#endif
} //----- Fin de ~Lecture


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
