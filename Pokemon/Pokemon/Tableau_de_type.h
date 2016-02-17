#include <iostream>
#include <string>
#include <vector>
using namespace std;

//variables constantes
const int nombreDeTypes = 15;	 //temporaire.. perte de memoire avec tableau non dynamique 

class Tableau_de_type{
private:
	double tableauDeType[nombreDeTypes][nombreDeTypes];
public:
	Tableau_de_type();	//default
	~Tableau_de_type();
	//getters
	double getTableauDeType(int index1, int index2);

	//setters
	void setTableauDeType(int index1, int index2, double tab[nombreDeTypes][nombreDeTypes]);

};

