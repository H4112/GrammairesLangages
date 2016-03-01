/*************************************************************************
                           E1  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:41
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <E1> (fichier E1.h) ------
#if ! defined ( E1_H )
#define E1_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <E1>
// D�finit l'�tat E1 de l'automate et ses transitions.
//
//------------------------------------------------------------------------ 

class E1 : public Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
    void print() const;
    // Mode d'emploi :
    //  Ecrit le nom de l'�tat sur la sortie standard.
    // Contrat :
    //  Aucun
	
	bool transition(Automate & automate, Symbole* s);
    // Mode d'emploi :
    //  Appelle l'automate donn� en param�tre pour effectuer le d�calage
	//  ou la r�duction correspondant au symbole pass� en param�tre.
    // Contrat :
    //  Aucun

//------------------------------------------------- Surcharge d'op�rateurs
    

//-------------------------------------------- Constructeurs - destructeur
    E1 ( const E1 & unE1 );

    E1 ( ); 

    virtual ~E1 ( );

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

//----------------------------------------- Types d�pendants de <E1>

#endif // E1_H
