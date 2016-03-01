/*************************************************************************
                           OperateurAdd  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <OperateurAdd> (fichier OperateurAdd.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "OperateurAdd.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

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

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
