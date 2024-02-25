//Author: Ethan Araki
//Date: 2/21/2024
//Purpose: Project 3

#include <stdio.h>

int main(){
	char c;
	do{
		int height, floors;
	
		// prints message, then user enters number of floors
		printf("Enter the number of floors in your building: ");
		scanf(" %d", &floors);
		
		//loops message until user inputs correct value of greater then 0
			while (floors <= 0){
				printf("Invalid number of floors. Try Again: ");
				scanf(" %d", &floors);
				}
				
		// prints message, the user enters height of floors
		printf("Enter the height of your floors: ");
		scanf(" %d", &height);
		
		
		printf("===============\n"); //prints the roof of building
		
		if (height < 3) height = 3;
		
		//loop for sides of buildings using floors input value
		for(int i = 1; i <= floors; i++){
			if(i!= floors){ //if not the bottom floors
				//print walls
				for (int n = 1; n <= height; n++){
					
		  			printf("|             |\n");		
				}
			}
		
				//print floor divider
				printf("|-------------|\n");
		
			else{
				int floorheight = height-3;
				for(int j = 0; j <= floorheight; j++){
					printf("|             |\n");
				}
			}
		}	
			printf("|     ___     |\n");
			printf("|    |   |    |\n");
			printf("|    |  o|    |\n");
			printf("|====|===|====|\n"); 
		printf("Build Another? ");
		scanf(" %c", &c);
		//prompts user if they want to build another building
		} while( c =='Y');
	//all code loops again until user inputs Y
	return 0;
}
