#include <iostream>
#include "pet.h"

using namespace std;

Pet::Pet(){
    species = "dog";
    name = "ron";
};
Pet::Pet(string spec, string newName){
    species = spec;
    name = newName;
};
Pet::Pet(const Pet& rhs){
    species = rhs.species;
    name = rhs.name;
};

string Pet::getSpecies(){
    return species;
};
void Pet::setSpecies(string s){
    species = s;
};
string Pet::getName(){
    return name;
};
void Pet::setName(string n){
    name = n;
};
void Pet::printPetData(){
    cout << getName() << " " << getSpecies() << " " << endl;
};
