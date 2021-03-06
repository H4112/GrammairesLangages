/*************************************************************************
                           E16  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E16> (fichier E16.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E16.h"
#include "../symboles/Identifiant.h"
#include "../Lecture.h"
#include "../symboles/PointVirgule.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E16::Afficher ( ) const 
{
    cout << "E16" << endl;
}

bool E16::Transition ( Automate & automate, Symbole * s )
{
    switch(*s)
    {
        case POINT_VIRGULE:
        {
            Identifiant * id = (Identifiant *) automate.PopSymbole();
            //Symbole * lire = 
            delete automate.PopSymbole();

            Lecture * lecture = new Lecture(*id);
            delete id;
            
            //réduire R11
            automate.Reduction(lecture, 2);
            return true;
        }
    }
    
    return false;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
Symbole * E16::Recuperation ( Symbole * symb )
{
    return new PointVirgule;
}
#pragma GCC diagnostic pop

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E16::E16 ( )
    : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E16>" << endl;
#endif
} //----- Fin de E16


E16::~E16 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E16>" << endl;
#endif
} //----- Fin de ~E16


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
