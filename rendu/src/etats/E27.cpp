/*************************************************************************
                           E27  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E27> (fichier E27.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E27.h"
#include "E20.h"
#include "E21.h"
#include "E22.h"
#include "E34.h"
#include "E19.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E27::Afficher ( ) const 
{
    cout << "E27" << endl;
}

bool E27::Transition ( Automate & automate, Symbole * s )
{
    switch(*s)
    {
        case OUVREPAR:
        {
            automate.Decalage(s, new E20);
            return true;
        }
        case ID:
        {
            automate.Decalage(s, new E21);
            return true;
        }
        case VAL:
        {
            automate.Decalage(s, new E22);
            return true;
        }
        case T:
        {
            automate.Decalage(s, new E34);
            return true;
        }
        case F:
        {
            automate.Decalage(s, new E19);
            return true;
        }
    }
    return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E27::E27 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E27>" << endl;
#endif
} //----- Fin de E27

E27::~E27 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E27>" << endl;
#endif
} //----- Fin de ~E27

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
