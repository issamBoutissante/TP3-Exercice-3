#pragma once
#include"Personne.h"
class Administrateur:public Personne
{
private:
	string matricule;
	string service;
public:
	Administrateur(string nom, string prenom, string matricule, string service);
	void Afficher();
};

