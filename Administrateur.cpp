#include "Administrateur.h"
#include<iostream>
Administrateur::Administrateur(string nom, string prenom, string matricule, string service)
	:Personne(nom,prenom) {
	this->matricule = matricule;
	this->service = service;
}
void Administrateur::Afficher() {
	Personne::Afficher();
	cout << "- Matricule : " << this->matricule << endl;
	cout << "- Service : " << this->service << endl;
}