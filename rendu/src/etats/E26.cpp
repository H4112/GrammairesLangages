/*************************************************************************
                           E26  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E26> (fichier E26.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E26.h"
#include "E33.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E26::Afficher ( ) const 
{
    cout << "E26" << endl;
}

bool E26::Transition ( Automate & automate, Symbole * s )
{
    switch(*s)
    {
        case VAL:
        {
            automate.Decalage(s, new E33);
            return true;
        }
    }
    return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E26::E26 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E26>" << endl;
#endif
} //----- Fin de E26

E26::~E26 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E26>" << endl;
#endif
} //----- Fin de ~E26

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
