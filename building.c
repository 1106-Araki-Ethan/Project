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
		
	while (floors <= 0){
		printf("Invalid number of floors. Try Again: ");
		scanf(" %d", &floors);
		}
	
	printf("Enter the height of your floors: ");
	scanf(" %d", &number);
	
	printf("===============\n");
	
	for(int i = 0; i < floors; i++){
	
	
	if(number >=3){	
		
		
		for (int n = 0; n < number; n++){
			
			
		  	printf("|             |\n");
			}
		}
		
	else if (number < 3){
			
				printf("|             |\n");
				printf("|             |\n");
				printf("|             |\n");
		}
	
	
	if (i == floors ){
		
		printf("|-------------| \n");
	
	}
	
	
	else if (i != floors){
		
		printf("|====|===|====|\n");
	}
	
	}
	
	printf("Build Another? ");
	scanf(" %c", &c);
		
		} while( c =='Y');
	
	return 0;
}
