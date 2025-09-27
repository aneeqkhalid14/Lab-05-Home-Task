#include <stdio.h>

int main(){
	int age;
	printf("Enter your age?\n");
	scanf("%d", &age);
	if(age < 5){
		printf("Free");
	}
	else if(age > 65){
		printf("Discount");
	}
	else{
		printf("Standard");
	}	
}
