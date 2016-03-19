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
#include "../Affectation.h"
#include "../Lecture.h"
#include "../Ecriture.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
int Instruction::GetType ( ) const
{
	return typeInstruction;
}

//------------------------------------------------- Surcharge d'opérateurs
ostream & operator << ( ostream & out, const Instruction & instruction )
{
    switch(instruction.GetType())
    {
        case INSTR_AFF:
            out << (const Affectation &)instruction;
            break;
        case INSTR_LIRE:
            out << (const Lecture &)instruction;
            break;
        case INSTR_ECRIRE:
            out << (const Ecriture &)instruction;
            break;
    }
    return out;
}
//-------------------------------------------- Constructeurs - destructeur
Instruction::Instruction ( const Instruction & unInstruction ) 
	: Symbole(unInstruction)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Instruction>" << endl;
#endif
} //----- Fin de Instruction (constructeur de copie)


Instruction::Instruction ( int type ) 
	: Symbole( "", I, false ), typeInstruction ( type )
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
