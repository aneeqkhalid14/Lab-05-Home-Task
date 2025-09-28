#include <stdio.h>

int main(){
	int hasPrerequisite, iscoursefull;
	printf("Have you completed the prerequisite? 1 for yes 0 for no: ");
	scanf("%d", &hasPrerequisite);
	printf("Is the course full? 1 for yes 0 for no: ");
	scanf("%d", &iscoursefull);
	
	if(hasPrerequisite == 1 && iscoursefull == 0){
		printf("Enrolled Successfully");
	}
	else if(hasPrerequisite == 1 && iscoursefull == 1){
		printf("Cannot enroll course is full");
	}
	else if(hasPrerequisite == 0 && iscoursefull == 1){
		printf("Cannot enroll: Prerequisite is missing and course is full");
	}
	else if(hasPrerequisite == 0 && iscoursefull == 0){
		printf("Cannot enroll: Prerequisite is missing");
	}
}
