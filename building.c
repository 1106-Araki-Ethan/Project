//Author: Ethan Araki
//Date: 2/21/2024
//Purpose: Project 3

#include <stdio.h>

int main(){
	char c;
	do{
		int height, floors;
	
		printf("Enter the number of floors in your building: ");
		scanf(" %d", &floors);
		// prints message, then user enters number of floors
			while (floors <= 0){
				printf("Invalid number of floors. Try Again: ");
				scanf(" %d", &floors);
				}
				//loops message until user inputs correct value of greater then 0
		
		printf("Enter the height of your floors: ");
		scanf(" %d", &height);
		// prints message, the user enters height of floors
		
		printf("===============\n");
		//prints the roof of building
		
		if (height < 3)
			 height = 3;
		for(int i = 0; i < floors; i++){
		//loop for sides of buildings using floors input value
	
				for (int n = 0; n < height; n++){
			
		  			printf("|             |\n");
			}}
	
		printf("Build Another? ");
		scanf(" %c", &c);
		//prompts user if they want to build another building
		} while( c =='Y');
	//all code loops again until user inputs Y
	return 0;
}
