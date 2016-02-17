#include "Pokemon.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Pokemon::Pokemon(){
	//cout << "Creation d'un pokemon!" << endl;
}

Pokemon::Pokemon(string nom, Type type, Attaque attaque, int speed,
	int attaqueSpeciale, int attaquePhysique, int defenseSpeciale,
	int defensePhysique, int niveau, int pointsDeVie){
	nom = nom;
	type = type;
	attaque = attaque;
	speed = speed;
	attaqueSpeciale = attaqueSpeciale;
	attaquePhysique = attaquePhysique;
	defenseSpeciale = defenseSpeciale;
	defensePhysique = defensePhysique;
	niveau = niveau;
	pointsDeVie = pointsDeVie;
	//cout << "Creation d'un pokemon!" << endl;
}

Pokemon::~Pokemon(){
	//cout << "Destruction d'un pokemon!" << endl;
}

//getters
string Pokemon::getNom(){
	return nom;
}
Type Pokemon::getType(){
	return type;
}
int Pokemon::getSpeed(){
	return speed;
}
Attaque Pokemon::getAttaque(int i)	{
	//pour retourner la i-eme attaque parmis les 4 attaques d'un pokemon
	return attaque[i];
}
int Pokemon::getAttaqueSpeciale(){
	return attaqueSpeciale;
}
int Pokemon::getAttaquePhysique(){
	return attaquePhysique;
}
int Pokemon::getDefenseSpeciale(){
	return defenseSpeciale;
}
int Pokemon::getDefensePhysique(){
	return defensePhysique;
}
int Pokemon::getNiveau(){
	return niveau;
}
int Pokemon::getPointsDeVie(){
	return pointsDeVie;
}


//setters
void Pokemon::setNom(string n){
	nom = n;
}
void Pokemon::setType(Type t){
	type = t;
}
void Pokemon::setSpeed(int s){
	speed = s;
}
void Pokemon::setAttaque(Attaque a, int i){
	attaque[i] = a;
}
void Pokemon::setAttaqueSpeciale(int as){
	attaqueSpeciale = as;
}
void Pokemon::setAttaquePhysique(int ap){
	attaquePhysique = ap;
}
void Pokemon::setDefenseSpeciale(int ds){
	defenseSpeciale = ds;
}
void Pokemon::setDefensePhysique(int dp){
	defensePhysique = dp;
}
void Pokemon::setNiveau(int niv){
	niveau = niv;
}
void Pokemon::setPointsDeVie(int pdv){
	pointsDeVie = pdv;
}