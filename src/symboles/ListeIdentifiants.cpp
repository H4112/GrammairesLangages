/*************************************************************************
                           ListeIdentifiants  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <ListeIdentifiants> (fichier ListeIdentifiants.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ListeIdentifiants.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
ListeIdentifiants::ListeIdentifiants ( const ListeIdentifiants & unListeIdentifiants )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ListeIdentifiants>" << endl;
#endif
} //----- Fin de ListeIdentifiants (constructeur de copie)


ListeIdentifiants::ListeIdentifiants ( ) : Symbole("RIEN", LID, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <ListeIdentifiants>" << endl;
#endif
} //----- Fin de ListeIdentifiants


ListeIdentifiants::~ListeIdentifiants ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <ListeIdentifiants>" << endl;
#endif
} //----- Fin de ~ListeIdentifiants


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
