#pragma once
#include "Professeur.h"
#include "Chercheur.h"
class ProfChercheur:public Professeur,public Chercheur
{
private:
	int nbrEncaderement;
public:
	ProfChercheur(string nom, string prenom, vector<string>& filieres, int nbrHeures,string domaine,int nbrEncaderement);
	void Afficher();
	float getRevenue();
};

