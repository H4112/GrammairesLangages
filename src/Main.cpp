#include <iostream>
#include <string>

using namespace std;

#include "Automate.h"
#include "symboles/Programme.h"

void afficher_aide( char * nom_executable )
{
	cerr << "Utilisation :" << endl;
    	cerr << nom_executable << " [-p] [-a] [-e] [-o] source.lt" << endl;
      	cerr << "[-p] affiche le code source reconnu" << endl;
	cerr << "[-a] analyse le programme de maniere statique" << endl;
        cerr << "[-e] execute interactivement le programme" << endl;
        cerr << "[-o] optimise les expressions et instructions" << endl;
}

int main ( int argc, char ** argv )
{
    if(argc < 2)
    {
        cerr << "Erreur, veuillez specifier des arguments" << endl;
  		afficher_aide(argv[0]);
        return 1;
    }

	bool afficher = false;
	bool analyser = false;
	bool executer = false;
	bool optimiser = false;
	for(int arg = 1; arg < argc - 1; arg++)
	{
		char * param = argv[arg];

		//le paramètre doit commencer par un tiret, et posséder
		//au moins 1 caractère après le tiret
		if(param[0] != '-' || !param[1])
		{
			cerr << "Erreur, argument invalide : " << param << endl;
			afficher_aide(argv[0]);
			return 1;
		}
		for(int i = 1; param[i]; i++)
		{
			switch(param[i])
			{
				case 'p':
					afficher = true;
					break;
				case 'a':
					analyser = true;
					break;
				case 'e':
					executer = true;
					break;
				case 'o':
					optimiser = true;
					break;
				default:
					cerr << "Erreur, option invalide : -" << param[i] << endl;
					afficher_aide(argv[0]);
					return 1;
			}
		}
	}

	try {
		if(!analyser && (optimiser || executer))
		{
			cerr << "Attention : l'analyse statique a été activée pour ";
			if(optimiser)
			{
				cerr << "optimiser";
			}
			if(optimiser && executer)
			{
				cerr << " et ";
			}
			if(executer)
			{
				cerr << "exécuter";
			}

			cerr << " le programme." << endl;

			analyser = true;
		}

		Automate a(argv[argc-1]);
		
		Programme * prog = a.Executer();

		if(prog != NULL)
		{	
	
			if(analyser)
			{
				if(!prog->Verifier())
				{
					return 1;
				}
			}
			if(optimiser)
			{
				prog->Simplifier();
			}
			if(afficher)
			{
				cout << *prog;
			}
			if(executer)
			{
				prog->Executer();
			}
		}
		else
		{
			return 1;
		}
	} 
	catch(string msg) 
	{
		cerr << msg << endl;
		return 1;
	}
    return 0;
}

