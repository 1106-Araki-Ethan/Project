#include <stdio.h>

int main(){

	int userNumber;
	
	printf("enter number: ");
	scanf("%d", &userNumber);
	
	printf("The factors of %d are: ", userNumber);
	for(int i= 1; i <= userNumber; i++){
		if(userNumber % i == 0){
			printf(" %d ", i);
		}
	}
	
	printf("\n");
	return 0;
	
	}
