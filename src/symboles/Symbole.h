/*************************************************************************
                           Symbole  -  Symbole de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Symbole> (fichier Symbole.h) ------
#if ! defined ( SYMBOLE_H )
#define SYMBOLE_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 
const int E = 0;
const int AFFECTATION = 1;
const int CONST = 2;
const int VAR = 3;
const int LIRE = 4;
const int ECRIRE = 5;
const int EGAL = 6;
const int VIRGULE = 7;
const int F = 8;
const int FERMEPAR = 9;
const int OUVREPAR = 10;
const int FIN = 11;
const int ID = 12;
const int I = 13;
const int LID = 14;
const int LIDV = 15;
const int OPA = 16;
const int OPM = 17;
const int POINT_VIRGULE = 18;
const int PD = 19;
const int PI = 20;
const int PROG = 21;
const int T = 22;
const int VAL = 23;
const int D = 24;

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Symbole>
// Définit un symbole quelconque manipulé par l'automate.
//
//------------------------------------------------------------------------ 

class Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	string GetNom();
	//Mode d'emploi :
	//	Permet d'obtenir un nom affichable pour le symbole.
	//Contrat :
	//	Aucun
	
	bool EstTerminal();
	//Mode d'emploi :
	//	Vaut true si le symbole est terminal, sinon false.
	//Contrat :
	//	Aucun

	void SetPosition ( int numL, int numC );
	//Mode d'emploi :
	//	Modifie la position du symbole dans le fichier source.
	//Contrat :
	//	La position donnée est cohérente

	int GetLigne ( ) ;
	//Mode d'emploi :
	//	Renvoie la ligne à laquelle ce symbole a été trouvé.
	//Contrat :
	//	SetPosition a été appelée.

	int GetChar ( );
	//Mode d'emploi :
	//	Renvoie la position dans la ligne à laquelle 
	//	ce symbole a été trouvé.
	//Contrat :
	//	SetPosition a été appelée.


//------------------------------------------------- Surcharge d'opérateurs
	operator int() const { return ident; }

//-------------------------------------------- Constructeurs - destructeur

	Symbole ( );
	// Interdit

    Symbole ( const Symbole & unSymbole );

    Symbole ( string nomTemp, int identTemp, bool terminalTemp );

    virtual ~Symbole ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés
	int ident;
private:
//------------------------------------------------------- Attributs privés
	string nom;
	bool terminal;
	int numLine;
	int numChar;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Symbole>

#endif // SYMBOLE_H
