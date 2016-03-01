/*************************************************************************
                           ListeIdentifiantsValeurs  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- R�alisation de la classe <ListeIdentifiantsValeurs> (fichier ListeIdentifiantsValeurs.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ListeIdentifiantsValeurs.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
ListeIdentifiantsValeurs::ListeIdentifiantsValeurs ( const ListeIdentifiantsValeurs & unListeIdentifiantsValeurs )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ListeIdentifiantsValeurs>" << endl;
#endif
} //----- Fin de ListeIdentifiantsValeurs (constructeur de copie)


ListeIdentifiantsValeurs::ListeIdentifiantsValeurs ( ) : Symbole("RIEN", LIDV, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <ListeIdentifiantsValeurs>" << endl;
#endif
} //----- Fin de ListeIdentifiantsValeurs


ListeIdentifiantsValeurs::~ListeIdentifiantsValeurs ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <ListeIdentifiantsValeurs>" << endl;
#endif
} //----- Fin de ~ListeIdentifiantsValeurs


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
