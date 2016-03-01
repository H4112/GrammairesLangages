/*************************************************************************
                           Symbole  -  Symbole de l'analyseur
                             -------------------
    d�but                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Interface de la classe <Symbole> (fichier Symbole.h) ------
#if ! defined ( SYMBOLE_H )
#define SYMBOLE_H

//--------------------------------------------------- Interfaces utilis�es

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
// R�le de la classe <Symbole>
// D�finit le symbole manipul� par l'automate.
//
//------------------------------------------------------------------------ 

class Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur
    Symbole ( const Symbole & unSymbole );

    Symbole ( );

    virtual ~Symbole ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- M�thodes prot�g�es

private:
//------------------------------------------------------- M�thodes priv�es

protected:
//----------------------------------------------------- Attributs prot�g�s

private:
//------------------------------------------------------- Attributs priv�s
string nom;
bool terminal;
int ident;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <Symbole>

#endif // SYMBOLE_H
