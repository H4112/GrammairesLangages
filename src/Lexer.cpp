/*************************************************************************
                           Lexer  -  Analyseur lexical
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Lexer> (fichier Lexer.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <string>
#include <boost/algorithm/string/trim.hpp>

using namespace std;

//------------------------------------------------------ Include personnel
#include "Lexer.h"
#include "symboles/Affecter.h"
#include "symboles/Const.h"
#include "symboles/Ecrire.h"
#include "symboles/Egal.h"
#include "symboles/FermePar.h"
#include "symboles/Identifiant.h"
#include "symboles/Lire.h"
#include "symboles/OperateurAdd.h"
#include "symboles/OperateurMult.h"
#include "symboles/OuvrePar.h"
#include "symboles/PointVirgule.h"
#include "symboles/Valeur.h"
#include "symboles/Var.h"
#include "symboles/Virgule.h"
#include "symboles/Fin.h"
//------------------------------------------------------------- Constantes
const pair < boost::regex, int > regexSymboles [] = {
	{ boost::regex("^\\s*(var)\\s"), VAR }, 
	{ boost::regex("^\\s*(const)\\s"), CONST },
	{ boost::regex("^\\s*(ecrire)\\s"), ECRIRE }, 
	{ boost::regex("^\\s*(lire)\\s"), LIRE },
	{ boost::regex("^\\s*(,)"), VIRGULE }, 
	{ boost::regex("^\\s*(;)"), POINT_VIRGULE },
	{ boost::regex("^\\s*([+-])"), OPA },
	{ boost::regex("^\\s*([*/])"), OPM },
	{ boost::regex("^\\s*(:=)"), AFFECTATION },
	{ boost::regex("^\\s*(=)"), EGAL },
	{ boost::regex("^\\s*(\\))"), FERMEPAR },
	{ boost::regex("^\\s*(\\()"), OUVREPAR },
	{ boost::regex("^\\s*([a-zA-Z][a-zA-Z0-9]*)"), ID },
	{ boost::regex("^\\s*([0-9]+)"), VAL }
};
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Symbole * Lexer::LireSymbole()
{
	if(symboleRecuperation != 0)
	{
		return symboleRecuperation;
	}
	else if(symboleCourant != 0)
	{
		return symboleCourant;
	}
	// Boucle infinie pour skipper les caractères invalides
	for(;;)
	{
		if(debut == fin && !lireLigne())
		{
			symboleCourant = new Fin();
			symboleCourant->SetPosition(numLigne, numChar);
			return symboleCourant;
		}
		boost::smatch occurence;

#ifdef AUTOMAP
		cerr << "lexer: cherche match dans " << string(debut, fin) << endl;
#endif

		for(pair<boost::regex, int> regexSymbole : regexSymboles){
			if(boost::regex_search(debut, fin, occurence, regexSymbole.first))
			{
#ifdef AUTOMAP
				cerr << "lexer: reconnu : " << string(occurence[1].first, occurence[1].second) << endl;
#endif
				symboleCourant = creerSymbole(string(occurence[1].first, occurence[1].second), regexSymbole.second);
				symboleCourant->SetPosition(numLigne, numChar + (occurence[1].first - debut));

				numChar += occurence[0].second - debut;
				debut = occurence[0].second;

				return symboleCourant;
			}
		}
		cerr << "Caractère non reconnu : \"" << *debut << "\" (ligne " << numLigne << ":" << numChar << ")" << endl;
		debut++;
		numChar++;
	}
	return 0;
}

void Lexer::ConsommerSymbole()
{
	if(symboleRecuperation != 0)
	{
		symboleRecuperation = 0;
	}
	else
	{
		symboleCourant = 0;
	}
}

void Lexer::SetSymboleRecuperation ( Symbole * symbole )
{
	symboleRecuperation = symbole;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Lexer::Lexer ( const Lexer & unLexer )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Lexer>" << endl;
#endif
} //----- Fin de Lexer (constructeur de copie)


Lexer::Lexer ( string nomFichier ) : fichier ( nomFichier, ios::in ), symboleCourant ( 0 ), 
	symboleRecuperation ( 0 ), numLigne ( 0 )
{
	if(!fichier)
	{
		throw string( "Erreur a l'ouverture du fichier \"" + nomFichier + "\"." ); 
	}
	lireLigne();
#ifdef MAP
    cout << "Appel au constructeur de <Lexer>" << endl;
#endif
} //----- Fin de Lexer


Lexer::~Lexer ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Lexer>" << endl;
#endif
	if(symboleRecuperation != 0)
	{
		delete symboleRecuperation;
	}
	if(symboleCourant != 0)
	{
		delete symboleCourant;
	}
	
    fichier.close();
} //----- Fin de ~Lexer

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
Symbole * Lexer::creerSymbole ( string nom, int ident )
{
	switch(ident)
	{
		case AFFECTATION:
			return new Affecter();
		case CONST:
			return new Const();
		case VAR:
			return new Var();
		case LIRE:
			return new Lire();
		case ECRIRE:
			return new Ecrire();
		case EGAL:
			return new Egal();
		case VIRGULE:
			return new Virgule();
		case FERMEPAR:
			return new FermePar();
		case OUVREPAR:
			return new OuvrePar();
		case ID:
			return new Identifiant(nom);
		case OPA:
			return new OperateurAdd(nom);
		case OPM:
			return new OperateurMult(nom);
		case POINT_VIRGULE:
			return new PointVirgule();
		case VAL:
			return new Valeur(nom);
	}
	return 0;
}

bool Lexer::lireLigne ( )
{
	do
	{
		if(fichier.eof())
		{
			return false;
		}
		getline (fichier, ligne);

		boost::algorithm::trim_right(ligne);

		numLigne++;
	}
	while(ligne.empty());
	//ligne += ';';
	debut = ligne.cbegin();
	fin = ligne.cend();
	numChar = 1;
	//cout << "lu : " << ligne << endl;
	return true;
}

