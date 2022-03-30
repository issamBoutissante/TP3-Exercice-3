#include "Professeur.h"
#include<iostream>
Professeur::Professeur(string nom, string prenom, vector<string>& filieres, int nbrHeures) 
	:Personne(nom,prenom) {
	this->filieres = filieres;
	this->nbrHeures = nbrHeures;
}
void Professeur::Afficher() {
	Personne::Afficher();
	cout << "- Filieres : " << endl;
	for (int i = 0;i < this->filieres.size();i++)
		cout << "   + " << this->filieres[i];
	cout <<"\n- Nombres Heures : "<< this->nbrHeures << endl;
}
int Professeur::getSalaire() { return this->nbrHeures * 250; }