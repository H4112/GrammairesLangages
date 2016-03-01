/*************************************************************************
                           E1  -  Etat de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:41
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <E1> (fichier E1.h) ------
#if ! defined ( E1_H )
#define E1_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <E1>
// Définit l'état E1 de l'automate et ses transitions.
//
//------------------------------------------------------------------------ 

class E1 : public Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void print() const;
    // Mode d'emploi :
    //  Ecrit le nom de l'état sur la sortie standard.
    // Contrat :
    //  Aucun
	
	bool transition(Automate & automate, Symbole* s);
    // Mode d'emploi :
    //  Appelle l'automate donné en paramètre pour effectuer le décalage
	//  ou la réduction correspondant au symbole passé en paramètre.
    // Contrat :
    //  Aucun

//------------------------------------------------- Surcharge d'opérateurs
    

//-------------------------------------------- Constructeurs - destructeur
    E1 ( const E1 & unE1 );

    E1 ( ); 

    virtual ~E1 ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <E1>

#endif // E1_H
