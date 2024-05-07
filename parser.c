//Author: Ethan Araki
//Date: 3/6/2024
//Purpose: Project 5

#include <stdio.h>

#define LETTERS 1000

int main(){ 

	//variables
	char phrase[LETTERS], Cap[LETTERS], lower[LETTERS], punc[LETTERS];
	int number, i;
	
	//phrase inputs
	printf("Enter your phrase: \n");
	fgets(phrase, LETTERS, stdin);
	
	int lowercase = 0, capital = 0, puncuation = 0;
	
	//Loop for showing amount of each variable and also to display each variable. 
	for( i = 0; phrase[i] != '\0'; i++){
		if(phrase[i] >= 'a' && phrase[i] <= 'z'){
			lower[lowercase] = phrase[i];
			lowercase++;
			
		}
		else if(phrase[i] >= 'A' && phrase[i] <= 'Z'){
			Cap[capital] = phrase[i];
			capital++;
			
		}
		else if((phrase[i] >= '!' && phrase[i] <= '@')||(phrase[i] >= '[' && phrase[i] <= '`')||(phrase[i] >= '{' && phrase[i] <= '~')){
			punc[puncuation] = phrase[i];
			puncuation++;
		}
	
	}
	
	
	//do while loop for menu
	do{
		
		printf("1. Display %d capital Letters.\n", capital);
		printf("2. Display %d lower case Letters.\n", lowercase);
		printf("3. Display %d puncuation characters.\n", puncuation);
		printf("0. EXIT\n");
		printf("Enter the number for the option you choose: \n");
		scanf("%d", &number);
	
	//if else statements for each input number	
		if(number == 2){
			printf("\n");
			printf("LOWERCASE: %s \n", lower);
			printf("\n");
		
		}
		else if(number == 1){
			printf("\n");
			printf("CAPITAL: %s \n", Cap);
			printf("\n");
		}
		
		else if(number == 3){
			printf("\n");
			printf("PUNCUATION: %s \n", punc);
			printf("\n");
		}
		
		else if(number == 0){
			printf("\n");
			printf("Goodbye!\n");
		}
		else{
			printf("\n");
			printf("Invalid option!\n");
			printf("\n");
		}
	} 
	while(number != 0);
	
	
	

	return 0; 
}
