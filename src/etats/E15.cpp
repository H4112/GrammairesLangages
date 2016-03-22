/*************************************************************************
                           E15  -  Etat de l'analyseur
                             -------------------
    début                : 8 mars 2016 10:43:21
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <E15> (fichier E15.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "E15.h"
#include "../symboles/Instruction.h"
#include "../symboles/PartieInstructions.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void E15::Afficher ( ) const 
{
    cout << "E15" << endl;
}

bool E15::Transition ( Automate & automate, Symbole * s )
{
    switch(*s)
    {
        case LIRE:
        case ECRIRE:
        case ID:
        case FIN:
        {
            //Symbole * point_virgule = 
            delete automate.PopSymbole();
            Instruction * i = (Instruction *) automate.PopSymbole();
            PartieInstructions * pi = (PartieInstructions *) automate.PopSymbole();

            pi->AjouterInstruction(i);
            //réduire R9
            automate.Reduction(pi, 3);
            return true;
        }
    }
    return false;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
E15::E15 ( ) : Etat ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <E15>" << endl;
#endif
} //----- Fin de E15

E15::~E15 ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <E15>" << endl;
#endif
} //----- Fin de ~E15


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
