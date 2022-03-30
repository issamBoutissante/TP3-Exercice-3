#include "Ingenieur.h"
#include<iostream>
Ingenieur::Ingenieur(string nom, string prenom, string specialite, string departement, int nbrHeures) 
	:Personne(nom,prenom) {
	this->specialite = specialite;
	this->departement = departement;
	this->nbrHeures = nbrHeures;
}
void Ingenieur::Afficher() {
	Personne::Afficher();
	cout << "- Specialite : " << this->specialite << endl;
	cout << "- Departement : " << this->departement << endl;
	cout << "- Nombres Heures : " << this->nbrHeures << endl;
}
int Ingenieur::getPrime() { return this->nbrHeures * 200; }