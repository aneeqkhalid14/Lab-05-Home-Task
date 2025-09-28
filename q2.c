#include <stdio.h>

int main(){
	int power;
	char light;
	printf("Is the power on or off? 1 for on 0 for off");
	scanf("%d", &power);
	if(power == 1){
		printf("What is the light colour? R for Red, Y for Yellow, G for Green: ");
		scanf(" %c", &light);
		if(light == 'R' || light == 'r'){
			printf("Stop");
		}
		else if(light == 'G' || light == 'g'){
			printf("Go");
		}
		else if(light == 'Y' || light == 'y'){
			printf("Caution");
		}
		else{
			printf("Invalid Input");
		}
	}
	else if(power == 0){
		printf("Signal Off");
	}
	
}
