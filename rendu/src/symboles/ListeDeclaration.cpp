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
    declarationsObtenues = true;
    return listeDeclarations;
}

void ListeDeclaration::SetIdent ( int id )
{
    if(id == D)
    {
        ident = id;
    }
    else
    {
        cerr << "Type incorrect " << id << endl;
    }
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ListeDeclaration::ListeDeclaration ( int id ) 
    : Symbole ( "", id, false ), declarationsObtenues ( false )
{
#ifdef MAP
    cout << "Appel au constructeur de <ListeDeclaration>" << endl;
#endif
} //----- Fin de ListeDeclaration

ListeDeclaration::~ListeDeclaration ( )
// Algorithme :
//     ListeDeclaration est le conteneur pour les déclarations,
//     jusqu'à ce que la méthode GetListeDeclarations() soit appelée,
//     dans lequel cas les pointeurs sont "sortis" du conteneur
//     et il ne faut donc plus les supprimer.
{
#ifdef MAP
    cout << "Appel au destructeur de <ListeDeclaration>" << endl;
#endif
    if(!declarationsObtenues)
    {
        for(Declaration * decl : listeDeclarations)
        {
            delete decl;
        }
    }
} //----- Fin de ~ListeDeclaration


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
void ListeDeclaration::ajouterDeclaration ( Declaration * declaration )
{
    listeDeclarations.push_back(declaration);
}

//------------------------------------------------------- Méthodes privées
