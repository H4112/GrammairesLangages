/*************************************************************************
                           E31  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E31> (fichier E31.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E31.h"
#include "../symboles/Virgule.h"
#include "../symboles/PointVirgule.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E31::Afficher ( ) const 
{
    cout << "E31" << endl;
}

bool E31::Transition ( Automate & automate, Symbole * s )
{
    switch(*s)
    {
        case VIRGULE:
        case POINT_VIRGULE:
        {
            Identifiant * id = (Identifiant *) automate.PopSymbole();
            //Symbole * virgule = 
            delete automate.PopSymbole();
            ListeIdentifiants * lid = (ListeIdentifiants *) automate.PopSymbole();
            lid->AjouterVariable(id);

            //réduire R5
            automate.Reduction(lid, 3);
            return true;
        }
    }
    return false;
}


Symbole * E31::Recuperation ( Symbole * symb )
{
    if(*symb == ID)
    {
        // Certainement une virgule oubliée
        return new Virgule;
    }
    else
    {
        // On considère que nous avons commencé une autre expression
        return new PointVirgule;
    }
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E31::E31 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E31>" << endl;
#endif
} //----- Fin de E31

E31::~E31 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E31>" << endl;
#endif
} //----- Fin de ~E31

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
