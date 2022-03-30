#pragma once
#include "Personne.h"
class Etudiant:public Personne
{
private:
	string filiere;
	string cne;
public:
	Etudiant(string nom, string prenom,string filiere, string cne);
	void Afficher();
};

