#pragma once
#include "Personne.h"
class Ingenieur:public Personne
{
private:
	string specialite;
	string	departement;
	int nbrHeures;
public:
	Ingenieur(string nom, string prenom, string specialite, string departement, int nbrHeures);
	void Afficher();
	int getPrime();
};

