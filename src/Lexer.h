/*************************************************************************
                           Lexer  -  Lexer de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Lexer> (fichier Lexer.h) ------
#if ! defined ( LEXER_H )
#define LEXER_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Lexer>
//
//------------------------------------------------------------------------ 

class Lexer
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    //void reduction ( Symbole * symboleEmpile, int nbDepile );
    // Mode d'emploi :
    //     Dépile nbDepile états de la pile, puis applique la transition
    //     correspondant au symbole passé en paramètre.
    //     Cette méthode empile également le symbole.
    //Contrat :
    //     Avoir au moins nbDepile + 1 états dans la pile et passer un
    //     symbole non-nul.

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Lexer ( const Lexer & unLexer );

    Lexer ( );
    // Interdit

    virtual ~Lexer ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Lexer>

#endif // LEXER_H
