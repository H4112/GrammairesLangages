/*************************************************************************
                           E38  -  Etat de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <E38> (fichier E38.h) ------
#if ! defined ( E38_H )
#define E38_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <E38>
// D�finit l'�tat E38 de l'automate et ses transitions.
//
//------------------------------------------------------------------------ 

class E38 : public Etat
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
    E38 ( const E38 & unE38 );

    E38 ( ); 

    virtual ~E38 ( );

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

//----------------------------------------- Types d�pendants de <E38>

#endif // E38_H
