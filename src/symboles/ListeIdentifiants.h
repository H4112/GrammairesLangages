/*************************************************************************
                           ListeIdentifiants  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <ListeIdentifiants> (fichier ListeIdentifiants.h) ------
#if ! defined ( LISTEIDENTIFIANTS_H )
#define LISTEIDENTIFIANTS_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <ListeIdentifiants>
// D�finit le symbole ListeIdentifiants manipul� par l'automate.
//
//------------------------------------------------------------------------ 

class ListeIdentifiants : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
    ListeIdentifiants ( const ListeIdentifiants & unListeIdentifiants );

    ListeIdentifiants ( ); 

    virtual ~ListeIdentifiants ( );

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

//----------------------------------------- Types d�pendants de <ListeIdentifiants>

#endif // LISTEIDENTIFIANTS_H
