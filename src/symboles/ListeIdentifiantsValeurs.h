/*************************************************************************
                           ListeIdentifiantsValeurs  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ListeIdentifiantsValeurs> (fichier ListeIdentifiantsValeurs.h) ------
#if ! defined ( LISTEIDENTIFIANTSVALEURS_H )
#define LISTEIDENTIFIANTSVALEURS_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <ListeIdentifiantsValeurs>
// D�finit le symbole ListeIdentifiantsValeurs manipul� par l'automate.
//
//------------------------------------------------------------------------ 

class ListeIdentifiantsValeurs : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
    ListeIdentifiantsValeurs ( const ListeIdentifiantsValeurs & unListeIdentifiantsValeurs );

    ListeIdentifiantsValeurs ( ); 

    virtual ~ListeIdentifiantsValeurs ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- M�thodes prot�g�es

private:
//------------------------------------------------------- M�thodes priv�es

protected:
//----------------------------------------------------- Attributs prot�g�s

private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <ListeIdentifiantsValeurs>

#endif // LISTEIDENTIFIANTSVALEURS_H
