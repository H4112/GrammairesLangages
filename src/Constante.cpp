/*************************************************************************
                           Constante  -  description
                             -------------------
    d�but                : 8 mars 2016 11:32:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <Constante> (fichier Constante.h) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
#include <iostream>
#include <string>

using namespace std;

//------------------------------------------------------ Include personnel
#include "Constante.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
bool Constante::EstAffectable ( ) const
{
    return false;
}

bool Constante::EstAffecte ( ) const
{
    return true;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
Constante::Constante ( string id, int val ) : Declaration(id, val)
{
#ifdef MAP
    cout << "Appel au constructeur de <Constante>" << endl;
#endif
} //----- Fin de Constante


Constante::~Constante ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Constante>" << endl;
#endif
} //----- Fin de ~Constante


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
