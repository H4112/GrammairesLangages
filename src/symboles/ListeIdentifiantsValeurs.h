/*************************************************************************
           ListeIdentifiantsValeurs  -  Symbole de l'analyseur
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ListeIdentifiantsValeurs> (fichier ListeIdentifiantsValeurs.h) ------
#if ! defined ( LISTEIDENTIFIANTSVALEURS_H )
#define LISTEIDENTIFIANTSVALEURS_H

//--------------------------------------------------- Interfaces utilisées
#include <list>

#include "Symbole.h"
#include "Identifiant.h"
#include "Valeur.h"
#include "ListeDeclaration.h"
#include "../Constante.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ListeIdentifiantsValeurs>
// Définit le symbole ListeIdentifiantsValeurs manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class ListeIdentifiantsValeurs : public ListeDeclaration
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void AjouterConstante ( Identifiant * id, Valeur * val );
    // Mode d'emploi : crée une nouvelle constante et l'ajoute à la liste.
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
