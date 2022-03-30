#include "Personne.h"
#include<iostream>
Personne::Personne(string nom, string prenom) {
	this->nom = nom;
	this->prenom = prenom;
}
void Personne::Afficher() {
	cout << "- Nom : " << this->nom << endl;
	cout << "- Prenom : " << this->prenom<<endl;
}