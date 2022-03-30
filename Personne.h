#pragma once
#include<string>
using namespace std;
class Personne
{
private:
	string nom;
	string prenom;
public:
	Personne(string nom, string prenom);
	void Afficher();
};

