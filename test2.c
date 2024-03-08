//Lab 5

#include <stdio.h>

#define GRADE 9

int main(){

	char letter[GRADE];
	
	
	//array inputs
	for(int i = 0; i < GRADE; i++){
		
		int j = i+1;
		printf("enter letter grade for project %d: ", j);
		scanf(" %c", &letter[i]);
	}
	
	//loop for letter
	
	
	printf("\n");
	int amountA = 0, amountB = 0;
	for(int k = 0; k < GRADE; k++){
		if((letter[k] == 'A')||(letter[k] == 'a')){
				amountA++;
		}
		else if((letter[k] == 'B')||(letter[k] == 'b')){
				amountB++;
		}
	} 
	
	printf("A = %d\n", amountA);
	
	
	printf("B = %d\n", amountB);
	
	
	
	return 0;
	
}
