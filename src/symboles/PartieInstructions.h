/*************************************************************************
                           PartieInstructions  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <PartieInstructions> (fichier PartieInstructions.h) ------
#if ! defined ( PARTIEINSTRUCTIONS_H )
#define PARTIEINSTRUCTIONS_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <PartieInstructions>
// D�finit le symbole PartieInstructions manipul� par l'automate.
//
//------------------------------------------------------------------------ 

class PartieInstructions : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
    PartieInstructions ( const PartieInstructions & unPartieInstructions );

    PartieInstructions ( ); 

    virtual ~PartieInstructions ( );

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

//----------------------------------------- Types d�pendants de <PartieInstructions>

#endif // PARTIEINSTRUCTIONS_H
