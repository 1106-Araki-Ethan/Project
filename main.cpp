#include "pet.h"
#include <iostream>
#define MAXSIZE 18
using namespace std;


int main(){
    //Don't alter this line
    Pet Gaston("Gaston", "Dog");
    Pet Fluffernutter("Fluffernutter", "Cat");
    
    //create another pet named Puff, a dragon
    Pet Puff("Puff", "Dragon");

    //create a pet array of MAXSIZE
    string petArray[MAXSIZE];

    //Loop through array, and add pets in the order Gaston, Puff,
    //and Fluffernutter until the array is full. 
    //The array will have  6 of each pet in alternating order
    do
    {
        /* code */
    } while (MAXSIZE);
    
    string nameArray[5]{"Gaston", "Fluffernutter", "Puff"};
    string speciesArray[5]{"Dog", "Cat", "Dragon"};


    cout << Fluffernutter.getName() << Fluffernutter.getSpecies() << "hello" << endl;
    cout << "hello" << endl;
    //Loop through each pet and display their data using the 
    //printPetData method in pet. Methods in a class can be accessed using
    //the . operator on an object of that class type. So for example, Gaston.getName() 
    //would call the getName method in Pet, and return it to be stored or used.
    //instead of using Gaston, use the pet in the array at each index, and then call printPetData() on it instead of getName()

    return 0;
}