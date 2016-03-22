/*************************************************************************
                           AnalyseurLexical  -  Analyseur lexical
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <AnalyseurLexical> (fichier AnalyseurLexical.h) ------
#if ! defined ( ANALYSEURLEXICAL_H )
#define ANALYSEURLEXICAL_H

class AnalyseurLexical; //Etat utilise AnalyseurLexical, nous devons l'avoir déclaré
                //avant de l'inclure

//--------------------------------------------------- Interfaces utilisées
#include <stack>
#include <map>
#include <string>
#include <fstream>

#include "symboles/Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <AnalyseurLexical>
// Permet d'exécuter l'analyseur de fichier
//
//------------------------------------------------------------------------ 

class AnalyseurLexical
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    Symbole* LireSymbole();
    void ConsommerSymbole();

    void SetSymboleRecuperation( Symbole * symbole );
    
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    AnalyseurLexical ( const AnalyseurLexical & unAnalyseurLexical );
    // Interdit

    AnalyseurLexical ( );
    // Interdit

    AnalyseurLexical ( string nomFichier );

    virtual ~AnalyseurLexical ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées
    Symbole * creerSymbole ( string nom, int type );
    bool lireLigne ( );
protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
    ifstream fichier;
    string ligne;
    string::const_iterator debut;
    string::const_iterator fin;

    Symbole * symboleCourant;
    Symbole * symboleRecuperation;

    int numLigne;
    int numChar;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <AnalyseurLexical>

#endif // ANALYSEURLEXICAL_H
