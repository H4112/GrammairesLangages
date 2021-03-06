/*************************************************************************
                           Declaration  -  Déclaration d'une variable/constante
                             -------------------
    début                : 8 mars 2016 11:21:34
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Declaration> (fichier Declaration.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Declaration.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
bool Declaration::EstUtilise ( ) const
{
    return utilise;
}

string Declaration::GetId ( ) const
{
    return id;
}

void Declaration::Utiliser ( )
{
    utilise = true;
}

int Declaration::GetValeur ( ) const
{
    return valeur;
}

//------------------------------------------------- Surcharge d'opérateurs
ostream & operator << ( ostream & out, const Declaration & declaration )
{
    if(declaration.EstAffectable())
    {
        out << "var " << declaration.GetId();
    }
    else
    {
        out << "const " << declaration.GetId() << " = " << declaration.GetValeur();
    }
    return out;
}

//-------------------------------------------- Constructeurs - destructeur
Declaration::Declaration ( string unId, int uneValeur )
    : valeur ( uneValeur ), id ( unId ), utilise ( false )
{
#ifdef MAP
    cout << "Appel au constructeur de <Declaration>" << endl;
#endif
} //----- Fin de Declaration

Declaration::~Declaration ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Declaration>" << endl;
#endif
} //----- Fin de ~Declaration

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées


