/*************************************************************************
                           OperateurMult  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:38:26
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <OperateurMult> (fichier OperateurMult.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

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
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <OperateurMult>" << endl;
#endif
} //----- Fin de OperateurMult (constructeur de copie)


OperateurMult::OperateurMult ( ) : Symbole("nom", OPM, true)
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
