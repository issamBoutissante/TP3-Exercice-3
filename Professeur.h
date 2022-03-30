#pragma once
#include "Personne.h"
#include<vector>
class Professeur:virtual public Personne
{
protected:
	vector<string> filieres;
	int nbrHeures;
public:
	Professeur(string nom, string prenom,vector<string> &filieres,int nbrHeures);
	void Afficher();
	int getSalaire();
};

