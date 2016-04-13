/*************************************************************************
                           Lecture  -  Instruction de lecture
                             -------------------
    début                : 15/03/2016
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Lecture> (fichier Lecture.h) ------
#if ! defined ( LECTURE_H )
#define LECTURE_H

//--------------------------------------------------- Interfaces utilisées
#include "symboles/Instruction.h"
#include "Declaration.h"
#include <map>

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Lecture>
//    Instruction demandant à l'utilisateur de saisir un nombre,
//    puis affectant ce nombre à la variable donnée en paramètre.
//
//------------------------------------------------------------------------ 

class Lecture : public Instruction
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Executer( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi : 
    //    Demande un nombre à l'utilisateur, puis l'affecte à la variable
    //    dont le nom a été passé au constructeur.
    
    void Simplifier( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi : 
    //    Ne fait rien.

    void Afficher( ostream & out ) const;
    // Mode d'emploi :
    //     Ecrit l'expression sur la sortie donnée en paramètre

    bool Verifier( map < string, Declaration * > & tableDeclarations );
    // Mode d'emploi :
    //     Vérification statique

//------------------------------------------------- Surcharge d'opérateurs
    
//-------------------------------------------- Constructeurs - destructeur
    Lecture ( const Lecture & unLecture );
    // Interdit

    Lecture ( );
    // Interdit
    
    Lecture ( string nom );
    // Mode d'emploi :
    //    Construit une instruction de lecture d'un nombre, pour ensuite
    //    mettre le résultat dans la variable dont le nom est passé
    //    en paramètre.

    virtual ~Lecture ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées
    string nomVariable;
    // nom de la variable à laquelle donner la valeur saisie

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Lecture>

#endif // LECTURE_H
