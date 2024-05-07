#include <stdio.h>

#define SIDES 10

int main(){
	
	int shape, i; 
	
	double length[SIDES], area = 1, perimeter = 0;
	
	
	printf("1. Rectangle/Square \n");
	printf("2. Triangle \n");
	printf("Input number to choose shape: ");
	scanf("%d", &shape);
	
	//Rectangle
	if(shape == 1){
		for( i = 1; i < 4; i++){
			if(i < 3){
				printf("Enter side %d: ", i);
				scanf("%lf", &length[i]);
				
				perimeter += length[i]*2;
				area *= length[i];		
			}
	
		}
		printf("Perimeter: %.2lf\n", perimeter);
		printf("Area; %.2lf\n", area);
	}
	
	//Triange
	if(shape == 2){
		printf("Enter adjacent: ");
		scanf("%lf", &length[1]);
		
		printf("Enter opposite: ");
		scanf("%lf", &length[2]);
		
		printf("Enter hypotenuse: ");
		scanf("%lf", &length[3]);
				
		perimeter = length[1]+length[2]+length[3];	
			//area *= length[i];		
		
		printf("Perimeter: %.2lf\n", perimeter);
		printf("Area: %.2lf\n", area);	
	
	}
		
	return 0;
}
