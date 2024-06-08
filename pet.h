#ifndef Pet_H  
#define Pet_H  
#include <iostream>
using namespace std;

class Pet{
    string name;
    string species;

    public:
        Pet();
        Pet(string, string);
        Pet(const Pet&);

        string getName();
        void setName(string);

        string getSpecies();
        void setSpecies(string);

        void printPetData();
};
#endif