/*************************************************************************
                           Lexer  -  Analyseur lexical
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Lexer> (fichier Lexer.h) ------
#if ! defined ( LEXER_H )
#define LEXER_H

class Lexer; //Etat utilise Lexer, nous devons l'avoir déclaré
                //avant de l'inclure

//--------------------------------------------------- Interfaces utilisées
#include <stack>
#include <map>
#include <string>
#include <fstream>
#include <boost/regex.hpp>

#include "symboles/Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Lexer>
// Permet d'exécuter l'analyseur de fichier
//
//------------------------------------------------------------------------ 

class Lexer
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    Symbole* LireSymbole();
    void ConsommerSymbole();

    
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Lexer ( const Lexer & unLexer );

    Lexer ( );
    // Interdit

    Lexer ( string nomFichier );

    virtual ~Lexer ( );

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

    Symbole *symboleCourant;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Lexer>

#endif // LEXER_H
