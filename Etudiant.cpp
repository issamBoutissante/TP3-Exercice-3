#include "Etudiant.h"
#include<iostream>
Etudiant::Etudiant(string nom, string prenom, string filiere, string cne) 
	:Personne(nom,prenom) {
	this->filiere = filiere;
	this->cne = cne;
}
void Etudiant::Afficher() {
	Personne::Afficher();
	cout << "- Filiere : " << this->filiere << endl;
	cout << "- CNE : " << this->cne << endl;
}