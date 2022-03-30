#include "Chercheur.h"
#include<iostream>
Chercheur::Chercheur(string nom, string prenom, string domaine) 
	:Personne(nom,prenom) {
	this->domaine = domaine;
}
void Chercheur::Afficher() {
	Personne::Afficher();
	cout << "- Domaine : " << this->domaine << endl;
}