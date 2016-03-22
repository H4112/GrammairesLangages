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
    // Mode d'emploi :
    //     Lit un symbole et le renvoie, sans le consommer.
    //     Le symbole récupéré sera toujours identique tant que ni
    //     ConsommerSymbole ni SetSymboleRecuperation ne sont appelés.
    // Contrat :
    //     Un fichier valide est ouvert

    void ConsommerSymbole();
    // Mode d'emploi :
    //     Consomme le symbole actuel. LireSymbole() renverra le symbole
    //     suivant du fichier.
    // Contrat :
    //     Un fichier valide est ouvert

    void SetSymboleRecuperation( Symbole * symbole );
    // Mode d'emploi :
    //     Insère un symbole à la tête de lecture. LireSymbole() renverra
    //     ce symbole et ConsommerSymbole() le consommera (LireSymbole()
    //     renverra alors le symbole original).
    // Contrat :
    //     Le symbole est non nul
    
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
    // crée un symbole à partir de son identifiant, avec le contenu spécifié

    bool lireLigne ( );
    // lit une ligne du fichier

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
    ifstream fichier;
    // fichier lu par l'analyseur

    string ligne;
    // dernière ligne lue

    string::const_iterator debut;
    // position du curseur dans la ligne

    string::const_iterator fin;
    // fin de la ligne

    Symbole * symboleCourant;
    // dernier symbole lu par l'analyseur

    Symbole * symboleRecuperation;
    // symbole remplaçant symboleCourant pendant une récupération

    int numLigne;
    int numChar;
    // position dans le fichier

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <AnalyseurLexical>

#endif // ANALYSEURLEXICAL_H
