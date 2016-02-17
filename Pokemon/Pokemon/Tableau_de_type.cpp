#include <iostream>
#include <string>
#include <vector>
#include "Tableau_de_type.h"
using namespace std;

Tableau_de_type::Tableau_de_type(){
	//cout << "Construction du tableau de types!" << endl;
}
Tableau_de_type::~Tableau_de_type(){
	//cout << "Destruction du tableau de types!" << endl;
}
//getters
double Tableau_de_type::getTableauDeType(int index1, int index2){
	return tableauDeType[index1][index2];
}

//setters
void Tableau_de_type::setTableauDeType(int index1, int index2, double tab[nombreDeTypes][nombreDeTypes]){
	tableauDeType[index1][index2] = tab[index1][index2];
}
