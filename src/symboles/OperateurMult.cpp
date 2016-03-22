/*************************************************************************
                           OperateurMult  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <OperateurMult> (fichier OperateurMult.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "OperateurMult.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
OperateurMult::OperateurMult ( const OperateurMult & unOperateurMult ) 
    : Symbole(unOperateurMult)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <OperateurMult>" << endl;
#endif
} //----- Fin de OperateurMult (constructeur de copie)


OperateurMult::OperateurMult ( string type ) 
    : Symbole ( type, OPM, true )
{
#ifdef MAP
    cout << "Appel au constructeur de <OperateurMult>" << endl;
#endif
} //----- Fin de OperateurMult


OperateurMult::~OperateurMult ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <OperateurMult>" << endl;
#endif
} //----- Fin de ~OperateurMult


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
