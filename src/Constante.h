/*************************************************************************
                  Constante  -  D�claration d'une constante
                             -------------------
    d�but                : 8 mars 2016 11:22:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Constante> (fichier Constante.h) ------
#if ! defined ( CONSTANTE_H )
#define CONSTANTE_H

//--------------------------------------------------- Interfaces utilis�es
#include <string>
#include "Declaration.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Constante>
//
//
//------------------------------------------------------------------------ 

class Constante : public Declaration
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
    bool EstAffectable ( ) const;
    // Mode d'emploi :
    //     Renvoie toujours faux.

    bool EstAffecte ( ) const;
    // Mode d'emploi :
    //     Renvoie toujours vrai.

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
    Constante ( const Constante & uneConstante );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Constante ( );
    // Interdit

    Constante ( string id, int val );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Constante ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

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

//----------------------------------------- Types d�pendants de <Constante>

#endif // CONSTANTE_H