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

using namespace std;

//------------------------------------------------------ Include personnel
#include "Lexer.h"
#include "symboles/Affectation.h"
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
//------------------------------------------------------------- Constantes
const pair < boost::regex, int > regexSymboles [] = {
	{ boost::regex("^[\\r\\n\\t ]s*(var)"), VAR }, 
	{ boost::regex("^\\s*(const)"), CONST },
	{ boost::regex("^\\s*(ecrire)"), ECRIRE }, 
	{ boost::regex("^\\s*(lire)"), LIRE },
	{ boost::regex("^\\s*(,)"), VIRGULE }, 
	{ boost::regex("^\\s*(;)"), POINT_VIRGULE },
	{ boost::regex("^\\s*([+-])"), OPA },
	{ boost::regex("^\\s*([*/])"), OPM },
	{ boost::regex("^\\s*(:=)"), AFFECTATION },
	{ boost::regex("^\\s*(=)"), EGAL },
	{ boost::regex("^\\s*(\\))"), FERMEPAR },
	{ boost::regex("^\\s*(\\()"), OUVREPAR },
	{ boost::regex("^[\\r\\n\\t ]*([a-zA-Z][a-zA-Z0-9]*)"), ID },
	{ boost::regex("^\\s*([0-9]+)"), VAL }
};
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Symbole* Lexer::LireSymbole()
{
	if(symboleCourant != 0)
	{
		return symboleCourant;
	}
	if(debut == fin && !lireLigne())
	{
		return 0;
	}
	boost::smatch occurence;
	for(pair<boost::regex, int> regexSymbole : regexSymboles){
		if(boost::regex_search(debut, fin, occurence, regexSymbole.first))
		{
			//cout << "reconnu : " << string(occurence[1].first, occurence[1].second) << endl;
			debut = occurence[1].second;
			symboleCourant = creerSymbole(string(occurence[1].first, occurence[1].second), regexSymbole.second);
			return symboleCourant;
		}
	}
	cout << "pas de match pour " << string(debut + 1, fin - 1) << endl;
	return 0;
}

void Lexer::ConsommerSymbole()
{
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
			return new Affectation();
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
			return new OperateurAdd(nom);
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
		boost::algorithm::trim_all(ligne);
	}
	while(ligne.empty());
	ligne += ';';
	debut = ligne.cbegin();
	fin = ligne.cend();
	//cout << "lu : " << ligne << endl;
	return true;
}

