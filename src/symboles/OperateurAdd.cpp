/*************************************************************************
                           OperateurAdd  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <OperateurAdd> (fichier OperateurAdd.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

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
OperateurAdd::OperateurAdd ( const OperateurAdd & unOperateurAdd )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <OperateurAdd>" << endl;
#endif
} //----- Fin de OperateurAdd (constructeur de copie)


OperateurAdd::OperateurAdd ( ) : Symbole("nom", OPA, true)
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
