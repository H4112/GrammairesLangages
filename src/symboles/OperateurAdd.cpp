/*************************************************************************
                           OperateurAdd  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:13
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <OperateurAdd> (fichier OperateurAdd.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "OperateurAdd.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
OperateurAdd::OperateurAdd ( string type ) 
    : Symbole ( type, OPA, true )
{
#ifdef MAP
    cout << "Appel au constructeur de <OperateurAdd>" << endl;
#endif
} //----- Fin de OperateurAdd


OperateurAdd::~OperateurAdd ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <OperateurAdd>" << endl;
#endif
} //----- Fin de ~OperateurAdd


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
