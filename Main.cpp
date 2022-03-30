#include <iostream>
#include "ProfChercheur.h"
int main()
{
	vector<string> filieres;
	filieres.push_back("C++");
	ProfChercheur p("boutissante", "issam", filieres, 20, "Programmation", 29);
	p.Afficher();
	return 200;
}