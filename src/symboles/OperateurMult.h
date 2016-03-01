/*************************************************************************
                           OperateurMult  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <OperateurMult> (fichier OperateurMult.h) ------
#if ! defined ( OPERATEURMULT_H )
#define OPERATEURMULT_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <OperateurMult>
// D�finit le symbole OperateurMult manipul� par l'automate.
//
//------------------------------------------------------------------------ 

class OperateurMult : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
    OperateurMult ( const OperateurMult & unOperateurMult );

    OperateurMult ( ); 

    virtual ~OperateurMult ( );

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

//----------------------------------------- Types d�pendants de <OperateurMult>

#endif // OPERATEURMULT_H
