/*************************************************************************
                           E17  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E17> (fichier E17.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E17.h"
#include "E27.h"
#include "../Ecriture.h"
#include "../symboles/Expression.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E17::Afficher ( ) const 
{
    cout << "E17" << endl;
}

bool E17::Transition ( Automate & automate, Symbole * s )
{
    switch(*s)
    {
        case POINT_VIRGULE:
        {
            Expression * e = (Expression *) automate.PopSymbole();
            //Symbole * ecrire = 
            delete automate.PopSymbole();

            Ecriture * ecriture = new Ecriture(e);
            //réduire R12
            automate.Reduction(ecriture, 2);
            return true;
        }
        case OPA:
        {
            automate.Decalage(s, new E27);
            return true;
        }
    }    
    return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E17::E17 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E17>" << endl;
#endif
} //----- Fin de E17

E17::~E17 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E17>" << endl;
#endif
} //----- Fin de ~E17

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
