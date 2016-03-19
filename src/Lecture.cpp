/*************************************************************************
                           Lecture  -  Instruction de lecture
                             -------------------
    début                : 15/03/2016
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Lecture> (fichier Lecture.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Lecture.h"
#include "Variable.h"
#include "symboles/Instruction.h"

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
	variable->SetValeur(nb);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
void Lecture::Simplifier( map < string, Declaration * > & tableDeclarations )
{
	((Variable *)tableDeclarations[nomVariable])->SetConstante(false);
}
#pragma GCC diagnostic pop

void Lecture::Afficher( ostream & out ) const
{
	out << "lire " << nomVariable;
}

bool Lecture::Verifier( map < string, Declaration * > & tableDeclarations )
{
	if(tableDeclarations.find(nomVariable) == tableDeclarations.end())
	{
		cerr << "\"" << nomVariable << "\" non déclaré." << endl;
		return false;
	}
	else if(!tableDeclarations[nomVariable]->EstAffectable())
	{
		cerr << "\"" << nomVariable << "\" est une constante et ne peut pas être affectée." << endl;
		return false;
	}
	else
	{
		((Variable *)tableDeclarations[nomVariable])->Affecter();
		return true;
	}
}

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
	: Instruction ( INSTR_LIRE ), nomVariable ( nom )
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
