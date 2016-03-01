/*************************************************************************
                           PointVirgule  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <PointVirgule> (fichier PointVirgule.h) ------
#if ! defined ( POINTVIRGULE_H )
#define POINTVIRGULE_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <PointVirgule>
// D�finit le symbole PointVirgule manipul� par l'automate.
//
//------------------------------------------------------------------------ 

class PointVirgule : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
    PointVirgule ( const PointVirgule & unPointVirgule );

    PointVirgule ( ); 

    virtual ~PointVirgule ( );

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

//----------------------------------------- Types d�pendants de <PointVirgule>

#endif // POINTVIRGULE_H
