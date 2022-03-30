#pragma once
#include"Personne.h"
class Chercheur:virtual public Personne
{
protected:
	string domaine;
public:
	Chercheur(string nom, string prenom, string domaine);
	void Afficher();
};

