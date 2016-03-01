/*************************************************************************
                           ListeIdentifiantsValeurs  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ListeIdentifiantsValeurs> (fichier ListeIdentifiantsValeurs.h) ------
#if ! defined ( LISTEIDENTIFIANTSVALEURS_H )
#define LISTEIDENTIFIANTSVALEURS_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ListeIdentifiantsValeurs>
// Définit le symbole ListeIdentifiantsValeurs manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class ListeIdentifiantsValeurs : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ListeIdentifiantsValeurs ( const ListeIdentifiantsValeurs & unListeIdentifiantsValeurs );

    ListeIdentifiantsValeurs ( ); 

    virtual ~ListeIdentifiantsValeurs ( );

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

//----------------------------------------- Types dépendants de <ListeIdentifiantsValeurs>

#endif // LISTEIDENTIFIANTSVALEURS_H
