#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
Regles de programmation: 
	- Toutes les variables commencent par une minuscule. Pour separer des mots dans celles-ci il faut utiliser une majusucule ou un _.
	- Toutes les constantes sont en majuscules. -> CONSTANTE;
	- Tous les nouveaux types (classes, struc) sont en minuscules avec une premiere lettre en majusucule.
*/

class Pokemon{
private:
	string nom;
	Type type;
	Attaque attaque[4];		//tableaux de 4 attaques par pokemon
	int speed;				//pour decider qui commence le combat selon la vitesse du pokemon
	int attaqueSpeciale;	//tous les pokemon ont un indice de force d'attaque speciale et d'attaque physique
	int attaquePhysique;
	int defenseSpeciale;	//tous les pokemon ont un indice de force de defense speciale et de defense physique
	int defensePhysique;
	int niveau;				//..pourrait devenir une constante globable, car tous les niv sont a 50.
	int pointsDeVie;		
public:
	Pokemon();	//default
	Pokemon(string nom, Type type, Attaque attaque, int speed, 
		int attaqueSpeciale, int attaquePhysique, int defenseSpeciale,
		int defensePhysique, int niveau, int pointsDeVie);	//avec param
	~Pokemon();	
	//getters
	string getNom();
	Type getType();
	int getSpeed();
	Attaque getAttaque(int i);	//int i pour choisir parmis les attaques
	int getAttaqueSpeciale();
	int getAttaquePhysique();
	int getDefenseSpeciale();
	int getDefensePhysique();
	int getNiveau();
	int getPointsDeVie();
	//setters
	void setNom(string n);
	void setType(Type t);
	void setSpeed(int s);
	void setAttaque(Attaque a, int i);
	void setAttaqueSpeciale(int as);
	void setAttaquePhysique(int ap);
	void setDefenseSpeciale(int ds);
	void setDefensePhysique(int dp);
	void setNiveau(int niv);
	void setPointsDeVie(int pdv);
	
};