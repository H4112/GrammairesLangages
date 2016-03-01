/*************************************************************************
                           PartieDeclarative  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <PartieDeclarative> (fichier PartieDeclarative.h) ------
#if ! defined ( PARTIEDECLARATIVE_H )
#define PARTIEDECLARATIVE_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <PartieDeclarative>
// D�finit le symbole PartieDeclarative manipul� par l'automate.
//
//------------------------------------------------------------------------ 

class PartieDeclarative : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
    PartieDeclarative ( const PartieDeclarative & unPartieDeclarative );

    PartieDeclarative ( ); 

    virtual ~PartieDeclarative ( );

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

//----------------------------------------- Types d�pendants de <PartieDeclarative>

#endif // PARTIEDECLARATIVE_H
