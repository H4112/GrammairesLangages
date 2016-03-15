/*************************************************************************
                           ExpressionBinaire  -  Expression arithmétique
                             -------------------
    début                : 8 mars 2016 08:23:14
    copyright            : (C) 2016 par H4112
*************************************************************************/

//---------- Réalisation de la classe <ExpressionBinaire> (fichier ExpressionBinaire.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "ExpressionBinaire.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ExpressionBinaire::ExpressionBinaire ( const ExpressionBinaire & uneExpressionBinaire ) 
	: Expression(uneExpressionBinaire), expGauche(uneExpressionBinaire.expGauche),
	  expDroite(uneExpressionBinaire.expDroite)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ExpressionBinaire>" << endl;
#endif
} //----- Fin de ExpressionBinaire (constructeur de copie)


ExpressionBinaire::ExpressionBinaire ( Expression * gauche, Expression * droite, int type ) 
	: Expression( type ), expGauche(gauche), expDroite(droite)
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpressionBinaire>" << endl;
#endif
} //----- Fin de ExpressionBinaire


ExpressionBinaire::~ExpressionBinaire ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <ExpressionBinaire>" << endl;
#endif
} //----- Fin de ~ExpressionBinaire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées