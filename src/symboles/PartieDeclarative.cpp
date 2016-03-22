/*************************************************************************
                           PartieDeclarative  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <PartieDeclarative> (fichier PartieDeclarative.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "PartieDeclarative.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
bool PartieDeclarative::AjouterDeclarations( ListeDeclaration * liste )
{
    list < Declaration * > listeDeclarations = liste->GetListeDeclarations();
    
    for ( Declaration * declaration : listeDeclarations )
    {
        if ( tableDeclarations.find(declaration->GetId()) == tableDeclarations.end() )
        {
            tableDeclarations[declaration->GetId()] = declaration;
        }
        else
        {
            //TODO gérer les cas non bloquants avec un warning
            cerr << "La variable \"" << declaration->GetId() << "\" est déjà déclarée." << endl;
            return false;
        }
    }
    
    return true;
}

map< string, Declaration * > PartieDeclarative::GetDeclarations ( )
{
    tableObtenue = true;

    return tableDeclarations;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
PartieDeclarative::PartieDeclarative ( const PartieDeclarative & unPartieDeclarative ) 
    : Symbole(unPartieDeclarative), 
        tableDeclarations(unPartieDeclarative.tableDeclarations),
        tableObtenue ( unPartieDeclarative.tableObtenue )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <PartieDeclarative>" << endl;
#endif
} //----- Fin de PartieDeclarative (constructeur de copie)


PartieDeclarative::PartieDeclarative ( ) 
    : Symbole("", PD, false),
        tableObtenue ( false )
{
#ifdef MAP
    cout << "Appel au constructeur de <PartieDeclarative>" << endl;
#endif
} //----- Fin de PartieDeclarative


PartieDeclarative::~PartieDeclarative ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <PartieDeclarative>" << endl;
#endif
    if(!tableObtenue)
    {
        for(auto decl : tableDeclarations)
        {
            delete decl.second;
        }
    }
} //----- Fin de ~PartieDeclarative


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
