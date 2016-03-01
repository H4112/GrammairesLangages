/*************************************************************************
                           PointVirgule  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <PointVirgule> (fichier PointVirgule.h) ------
#if ! defined ( POINTVIRGULE_H )
#define POINTVIRGULE_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <PointVirgule>
// Définit le symbole PointVirgule manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class PointVirgule : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    PointVirgule ( const PointVirgule & unPointVirgule );

    PointVirgule ( ); 

    virtual ~PointVirgule ( );

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

//----------------------------------------- Types dépendants de <PointVirgule>

#endif // POINTVIRGULE_H
