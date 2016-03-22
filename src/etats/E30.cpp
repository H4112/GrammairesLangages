/*************************************************************************
                           E30  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E30> (fichier E30.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E30.h"
#include "E27.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E30::Afficher ( ) const 
{
    cout << "E30" << endl;
}

bool E30::Transition ( Automate & automate, Symbole * s )
{
    switch(*s)
    {
        case POINT_VIRGULE:
        {
            Expression * e = (Expression *) automate.PopSymbole();
            //Symbole * affectation = 
            delete automate.PopSymbole();
            Identifiant * id = (Identifiant *) automate.PopSymbole();

            Instruction * i = new Affectation(*id,e);
            delete id;
            //réduire R13
            automate.Reduction(i, 3);
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
E30::E30 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E30>" << endl;
#endif
} //----- Fin de E30

E30::~E30 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E30>" << endl;
#endif
} //----- Fin de ~E30

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
