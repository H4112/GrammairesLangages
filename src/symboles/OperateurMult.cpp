/*************************************************************************
                           OperateurMult  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <OperateurMult> (fichier OperateurMult.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "OperateurMult.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

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

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
