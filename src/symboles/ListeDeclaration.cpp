/*************************************************************************
                           ListeDeclaration  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <ListeDeclaration> (fichier ListeDeclaration.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "ListeDeclaration.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
list < Declaration * > ListeDeclaration::GetListeDeclarations ( ) 
{
	return listeDeclarations;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ListeDeclaration::ListeDeclaration ( const ListeDeclaration & unListeDeclaration ) 
	: Symbole("",D,false), listeDeclarations(unListeDeclaration.listeDeclarations)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ListeDeclaration>" << endl;
#endif
} //----- Fin de ListeDeclaration (constructeur de copie)

ListeDeclaration::ListeDeclaration ( int type ) 
    : Symbole("", type, false)
{
#ifdef MAP
    cout << "Appel au constructeur de <ListeDeclaration>" << endl;
#endif
} //----- Fin de ListeDeclaration

ListeDeclaration::~ListeDeclaration ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <ListeDeclaration>" << endl;
#endif
} //----- Fin de ~ListeDeclaration


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
void ListeDeclaration::ajouterDeclaration ( Declaration * declaration )
{
	listeDeclarations.push_back(declaration);
}

//------------------------------------------------------- Méthodes privées
