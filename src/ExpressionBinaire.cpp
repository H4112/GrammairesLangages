/*************************************************************************
                           ExpressionBinaire  -  Expression arithmétique
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <ExpressionBinaire> (fichier ExpressionBinaire.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "ExpressionBinaire.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
bool ExpressionBinaire::Verifier ( map < string, Declaration * > & tableDeclarations )
{
    return expGauche->Verifier(tableDeclarations) && expDroite->Verifier(tableDeclarations);
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ExpressionBinaire::ExpressionBinaire ( Expression * gauche, Expression * droite, int type ) 
    : Expression( type ), expGauche(gauche), expDroite(droite)
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpressionBinaire>" << endl;
#endif
} //----- Fin de ExpressionBinaire


ExpressionBinaire::~ExpressionBinaire ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <ExpressionBinaire>" << endl;
#endif
    if(expGauche != 0)
    {
        delete expGauche;
    }
    if(expDroite != 0)
    {
        delete expDroite;
    }
} //----- Fin de ~ExpressionBinaire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
void ExpressionBinaire::simplifierGaucheDroite ( map < string, Declaration * > & tableDeclarations )
{
    Expression * gauche = expGauche->Simplifier(tableDeclarations);
    if(gauche != expGauche)
    {
        delete expGauche;
        expGauche = gauche;
    }
    Expression * droite = expDroite->Simplifier(tableDeclarations);
    if(droite != expDroite)
    {
        delete expDroite;
        expDroite = droite;
    }
}
//------------------------------------------------------- Méthodes privées
