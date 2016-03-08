/*************************************************************************
                           Programme  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Programme> (fichier Programme.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <map>

using namespace std;

//------------------------------------------------------ Include personnel
#include "Programme.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Programme::Executer ( )
{
    for ( Instruction * instruction : listeInstructions )
    {
        instruction->Executer ( tableDeclarations );
    }
}

//------------------------------------------------- Surcharge d'opérateurs
ostream & operator << ( ostream & out, const Programme & programme )
{
    for ( auto & declaration : programme.tableDeclarations )
    {
        out << *(declaration.second) << endl;
    }
    for ( Instruction * instruction : programme.listeInstructions )
    {
        out << *instruction << endl;
    }
    return out;
}
//-------------------------------------------- Constructeurs - destructeur
Programme::Programme ( const Programme & unProgramme ) 
    : Symbole ( unProgramme ),
      tableDeclarations ( unProgramme.tableDeclarations ),
      listeInstructions ( unProgramme.listeInstructions )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Programme>" << endl;
#endif
} //----- Fin de Programme (constructeur de copie)

Programme::Programme ( map < string, Declaration * > tblDeclarations,
        list < Instruction * > lstInstructions )
    : Symbole ( "", PROG, false ), tableDeclarations(tblDeclarations),
      listeInstructions(lstInstructions)
{
#ifdef MAP
    cout << "Appel au constructeur de <Programme>" << endl;
#endif
} //----- Fin de Programme

Programme::~Programme ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Programme>" << endl;
#endif
} //----- Fin de ~Programme


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
