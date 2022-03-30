#include "ProfChercheur.h"
#include<iostream>
using namespace std;
ProfChercheur::ProfChercheur(string nom, string prenom, vector<string>& filieres, int nbrHeures, string domaine,int nbrEncaderement)
	:Professeur(nom,prenom,filieres,nbrHeures) ,
	 Chercheur(nom,prenom,domaine) ,
	 Personne(nom,prenom) {
	this->nbrEncaderement = nbrEncaderement;
}
void ProfChercheur::Afficher() {
	Professeur::Afficher();
	cout << "- Domaine : " << this->domaine << endl;
	cout << "- Nombre D'heures Encademrement : " << this->nbrEncaderement << endl;
}
float ProfChercheur::getRevenue() {
	return this->nbrHeures * 150;
}