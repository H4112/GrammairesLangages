/*************************************************************************
                           E19  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <E19> (fichier E19.h) ------
#if ! defined ( E19_H )
#define E19_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <E19>
// D�finit l'�tat E19 de l'automate et ses transitions.
//
//------------------------------------------------------------------------ 

class E19 : public Etat
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
    E19 ( const E19 & unE19 );

    E19 ( ); 

    virtual ~E19 ( );

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

//----------------------------------------- Types d�pendants de <E19>

#endif // E19_H
