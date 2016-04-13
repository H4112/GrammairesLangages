/*************************************************************************
                           ListeIdentifiantsValeurs  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <ListeIdentifiantsValeurs> (fichier ListeIdentifiantsValeurs.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "ListeIdentifiantsValeurs.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void ListeIdentifiantsValeurs::AjouterConstante ( Identifiant * id, Valeur * val )
{
    ajouterDeclaration(new Constante(*id,*val));
    delete id;
    delete val;
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ListeIdentifiantsValeurs::ListeIdentifiantsValeurs ( ) 
    : ListeDeclaration ( LIDV )
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

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
