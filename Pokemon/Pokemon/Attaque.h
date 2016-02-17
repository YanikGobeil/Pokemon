#include <iostream>
#include <string>
using namespace std;

class Attaque
{
private:
	string nom; //nom de l'attaque
	int categorie; //type d'attaque (ie Grass,Fire,water, etc.)
	int puissance; //force qu'une attaque peut avoir
	int precision; //pourcentage de precision d'un attaque (...,70%, 80%, 90%, 100%)
	int pp;
	//Type type;
public:
	Attaque(){ categorie = 0; puissance = 0; precision = 0; pp = 0; nom = " "; }; //constructor **type = NULL
	~Attaque(){ cout << "Destructor Attaque" << endl; }; //destructor **delete type
	Attaque(int m_categorie, int m_puissance, int m_precision, int m_pp)
		: categorie(m_categorie), puissance(m_puissance), precision(m_precision), pp(m_pp) {} //initialiser les membres

	const int PHYSIQUE = 1; //dommage physique
	const int SPECIAL = 0; //dommage special

	//getters
	int getCategorie(){ return categorie; }; //if (categorie == 1) -> PHYSIQUE, (categorie == 0) -> SPECIAL
	int getPuissance(){ return puissance; };
	int getPrecision(){ return precision; };
	int getPP(){ return pp; };

	//setters
	void setCategorie(int _categorie){ categorie = _categorie; };
	void setPuissance(int _puissance){ puissance = _puissance; };
	void setPrecision(int _precision){ precision = _precision; };
	void setPP(int _pp){ pp = _pp; };


};