//Author: Ethan Araki
//Date: 2/21/2024
//Purpose: Project 3

#include <stdio.h>

int main(){
	char c;
	do{
		int number, floors;
	
		printf("Enter the number of floors in your building: ");
		scanf(" %d", &floors);
		// prints message, then user enters number of floors
			while (floors <= 0){
				printf("Invalid number of floors. Try Again: ");
				scanf(" %d", &floors);
				}
				//loops message until user inputs correct value of greater then 0
		printf("Enter the height of your floors: ");
		scanf(" %d", &number);
		// prints message, the user enters height of floors
		printf("===============\n");
		//prints the roof of building
	
		for(int i = 0; i < floors; i++){
		//loop for sides of buildings using floors input value
	
			if(number >=3){	
			// executes if input for number is greater or equal to 3
		
				for (int n = 0; n < number; n++){
			
		  			printf("|             |\n");
			}}
		
			else if (number < 3){
			//executes if input for number is less then three
				printf("|             |\n");
				printf("|             |\n");
				printf("|             |\n");
			}
	
		if (i != floors ){
		//executes if i does not equal floors input
			printf("|-------------| \n");
			}
	
	
		else if (i == floors){
		//executes if i does equal floors input
			printf("|====|===|====|\n");
			}
			}
	
		printf("Build Another? ");
		scanf(" %c", &c);
		//prompts user if they want to build another building
		} while( c =='Y');
	//all code loops again until user inputs Y
	return 0;
}
