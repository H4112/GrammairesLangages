/*************************************************************************
                           PartieInstructions  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <PartieInstructions> (fichier PartieInstructions.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "PartieInstructions.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
list < Instruction * > PartieInstructions::GetInstructions ( )
{
    listeObtenue = true;
    return listeInstructions;
}

void PartieInstructions::AjouterInstruction ( Instruction * instruction )
{
    listeInstructions.push_back(instruction);
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
PartieInstructions::PartieInstructions ( const PartieInstructions & unePartieInstructions ) 
    : Symbole(unePartieInstructions), listeObtenue (unePartieInstructions.listeObtenue)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <PartieInstructions>" << endl;
#endif
} //----- Fin de PartieInstructions (constructeur de copie)


PartieInstructions::PartieInstructions ( ) 
    : Symbole("", PI, false), listeObtenue ( false )
{
#ifdef MAP
    cout << "Appel au constructeur de <PartieInstructions>" << endl;
#endif
} //----- Fin de PartieInstructions


PartieInstructions::~PartieInstructions ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <PartieInstructions>" << endl;
#endif
    if(!listeObtenue)
    {
        for(Instruction * instr : listeInstructions)
        {
            delete instr;
        }
    }
} //----- Fin de ~PartieInstructions


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
