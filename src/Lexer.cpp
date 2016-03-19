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
#include <boost/algorithm/string/trim_all.hpp>
#include <boost/algorithm/string/replace.hpp>

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
	{ boost::regex("^(var)\\s"), VAR }, 
	{ boost::regex("^(const)\\s"), CONST },
	{ boost::regex("^(ecrire)\\s"), ECRIRE }, 
	{ boost::regex("^(lire)\\s"), LIRE },
	{ boost::regex("^(,)"), VIRGULE }, 
	{ boost::regex("^(;)"), POINT_VIRGULE },
	{ boost::regex("^([+-])"), OPA },
	{ boost::regex("^([*/])"), OPM },
	{ boost::regex("^(:=)"), AFFECTATION },
	{ boost::regex("^(=)"), EGAL },
	{ boost::regex("^(\\))"), FERMEPAR },
	{ boost::regex("^(\\()"), OUVREPAR },
	{ boost::regex("^([a-zA-Z][a-zA-Z0-9]*)"), ID },
	{ boost::regex("^([0-9]+)"), VAL }
};
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Symbole * Lexer::LireSymbole()
{
	if(symboleCourant != 0)
	{
		return symboleCourant;
	}
	if(debut == fin && !lireLigne())
	{
		return new Fin();
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
			debut = occurence[1].second;
			symboleCourant = creerSymbole(string(occurence[1].first, occurence[1].second), regexSymbole.second);
			return symboleCourant;
		}
	}
	cerr << "lexer: pas de match pour " << string(debut, fin) << endl;
	return 0;
}

void Lexer::ConsommerSymbole()
{
	// Commenté sinon ça plante... car le symbole est stocké ailleurs
	//delete symboleCourant;
	symboleCourant = 0;
}
/*
void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
    }
}

string supprimerDoublonsChar(string s, char c){
		s.erase(unique(s.begin(), s.end(),
      [](char a, char b) { return a == ' ' && b == ' '; } ), s.end() ); 
      return s;
}

string trouverPremierMot(string s){
	string result="";
	for(unsigned int i = 0; i<s.length(); i++) {
		char c = s[i];
		if(c == ' '){
			break;
		}
		result.push_back(c);
	}
	return result;
}
*/
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Lexer::Lexer ( const Lexer & unLexer )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Lexer>" << endl;
#endif
} //----- Fin de Lexer (constructeur de copie)


Lexer::Lexer ( string nomFichier ) : fichier ( nomFichier, ios::in )
{
	if(!fichier)
	{
		throw string( "Erreur à l'ouverture de " + nomFichier ); 
	}
	lireLigne();
	symboleCourant = 0;
	
#ifdef MAP
    cout << "Appel au constructeur de <Lexer>" << endl;
#endif
} //----- Fin de Lexer


Lexer::~Lexer ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Lexer>" << endl;
#endif
} //----- Fin de ~Lexer

/*int main(){

	try 
	{ 
		Lexer l("test.txt");
		l.getSymboleSuivant();
	} 
	catch ( const std::string & Msg ) 
	{ 
		std::cerr << Msg; 
	}
	return 0;
}*/

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
		getline (fichier, ligne, ';');
		boost::algorithm::replace_all(ligne, "\n", " ");
		boost::algorithm::replace_all(ligne, "\r", " ");
		boost::algorithm::replace_all(ligne, "\t", " ");

		boost::algorithm::trim_all(ligne);
	}
	while(ligne.empty());
	ligne += ';';
	debut = ligne.cbegin();
	fin = ligne.cend();
	//cout << "lu : " << ligne << endl;
	return true;
}

