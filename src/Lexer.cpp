/*************************************************************************
                           Lexer  -  Lexer de l'analyseur
                             -------------------
    début                : 1 mars 2016 11:16:42
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <Lexer> (fichier Lexer.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <string>

using namespace std;

//------------------------------------------------------ Include personnel
#include "Lexer.h"
using namespace boost;

//------------------------------------------------------------- Constantes
const char FIN_INSTRUCTION=';';
const char SEPARATEUR_INSTRUCTION=',';

pair<boost::regex, int> correspondancesRegex[] = { {boost::regex("(var)"), VAR}, 
	{boost::regex("(const)"), CONST}, {boost::regex("(ecrire)"), ECRIRE}, 
	{boost::regex("(lire)"), LIRE}, {boost::regex("(,)"), VIRGULE}, 
	{boost::regex("(;)"), POINT_VIRGULE},
 {boost::regex("([+-])"), OPA}, {boost::regex("([*/])"), OPM}, 
 {boost::regex("(:=)"), AFFECTATION}, {boost::regex("(=)"), EGAL}, {boost::regex("(\\))"), FERMEPAR}, 
 {boost::regex("(\\()"), OUVREPAR}, {boost::regex("([a-zA-Z][a-zA-Z0-9]*)"), ID}, {boost::regex("([0-9]+)"), VAL} };
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Symbole* Lexer::getSymboleSuivant()
{
	boost::regex expression("var");
	getline (fichier, ligneCourante, (char) fichier.eof());

	cout << ligneCourante << endl;

	std::string::const_iterator start, end;
	start = ligneCourante.begin();
	end = ligneCourante.end();
	boost::match_results<std::string::const_iterator> what;
	boost::match_flag_type flags = boost::match_default;
	
	for(pair<boost::regex, int> correspondance : correspondancesRegex){
		if(regex_search(start, end, what, correspondance.first, flags))
		{
			cout << what[0] << endl;
		}
	}
	
	return 0;
}

void Lexer::consommerSymboleSuivant()
{
	//TODO
}

bool fichierOuvert(){
	//return fichier.is_open()?true:false;
	return true;
}

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

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Lexer::Lexer ( const Lexer & unLexer )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Lexer>" << endl;
#endif
} //----- Fin de Lexer (constructeur de copie)


Lexer::Lexer ( string nomFichier ) :fichier(nomFichier, ios::in)
{
	if(!fichier)
	{
		throw string( "Erreur à l'ouverture de "+nomFichier+"\n" ); 
	}
	
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
