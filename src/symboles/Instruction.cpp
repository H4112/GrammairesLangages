/*************************************************************************
                           Instruction  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Instruction> (fichier Instruction.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Instruction.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Instruction::Instruction ( const Instruction & unInstruction )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Instruction>" << endl;
#endif
} //----- Fin de Instruction (constructeur de copie)


Instruction::Instruction ( ) : Symbole("RIEN", I, false)
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

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
