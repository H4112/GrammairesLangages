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
#include "symboles/Instruction.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Affectation::Executer( map < string, Declaration * > & tableDeclarations )
{
	((Variable*)tableDeclarations[nomVariable])->SetValeur(expression->Evaluer(tableDeclarations));
}

void Affectation::Simplifier( map < string, Declaration * > & tableDeclarations )
{
    Expression * expr = expression->Simplifier(tableDeclarations);
    if(expr != expression)
    {
        delete expression;
        expression = expr;
    }
}

void Affectation::Afficher( ostream & out ) const
{
    out << nomVariable << " := " << *expression;
}

bool Affectation::Verifier( map < string, Declaration * > & tableDeclarations )
{
    if(tableDeclarations.find(nomVariable) == tableDeclarations.end())
    {
        cerr << "La variable \"" << nomVariable << "\" n'est pas déclarée.";
        return false;
    }
    else if(!tableDeclarations[nomVariable]->EstAffectable())
    {
        cerr << "La constante \"" << nomVariable << "\" ne peut pas être affectée.";
        return false;
    }
    else if(!expression->Verifier(tableDeclarations))
    {
        cerr << " dans l'expression \"" << *expression << "\"." << endl;
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
Affectation::Affectation ( const Affectation & unAffectation )
	: Instruction ( unAffectation )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Affectation>" << endl;
#endif
} //----- Fin de Affectation (constructeur de copie)


Affectation::Affectation ( string nomVar, Expression * expr )
	: Instruction ( INSTR_AFF ), nomVariable(nomVar), expression(expr)
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
    delete expression;
} //----- Fin de ~Affectation


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
