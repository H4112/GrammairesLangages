/*************************************************************************
                           OperateurAdd  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <OperateurAdd> (fichier OperateurAdd.h) ------
#if ! defined ( OPERATEURADD_H )
#define OPERATEURADD_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <OperateurAdd>
// D�finit le symbole OperateurAdd manipul� par l'automate.
//
//------------------------------------------------------------------------ 

class OperateurAdd : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
    OperateurAdd ( const OperateurAdd & unOperateurAdd );

    OperateurAdd ( ); 

    virtual ~OperateurAdd ( );

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

//----------------------------------------- Types d�pendants de <OperateurAdd>

#endif // OPERATEURADD_H
