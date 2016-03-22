/*************************************************************************
                           E36  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E36> (fichier E36.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E36.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E36::Afficher ( ) const 
{
    cout << "E36" << endl;
}

bool E36::Transition ( Automate & automate, Symbole * s )
{
    switch(*s)
    {
        case POINT_VIRGULE:
        case FERMEPAR:
        case OPA:
        case OPM:
        {
            //Symbole * fermepar = 
            delete automate.PopSymbole();
            Expression * e = (Expression *) automate.PopSymbole();
            //Symbole * ouvrepar = 
            delete automate.PopSymbole();

            Parentheses * p = new Parentheses(e);
            p->SetIdent(F);
            //réduire R18
            automate.Reduction(p, 3);
            return true;
        }
    }
    
    return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E36::E36 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E36>" << endl;
#endif
} //----- Fin de E36


E36::~E36 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E36>" << endl;
#endif
} //----- Fin de ~E36


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
