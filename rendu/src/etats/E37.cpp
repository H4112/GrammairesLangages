/*************************************************************************
                           E37  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E37> (fichier E37.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E37.h"
#include "E38.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E37::Afficher ( ) const 
{
    cout << "E37" << endl;
}

bool E37::Transition ( Automate & automate, Symbole * s )
{
    switch(*s)
    {
        case VAL:
        {
            automate.Decalage(s, new E38);
            return true;
        }
    }
    
    return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E37::E37 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E37>" << endl;
#endif
} //----- Fin de E37


E37::~E37 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E37>" << endl;
#endif
} //----- Fin de ~E37


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
