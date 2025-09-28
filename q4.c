#include <stdio.h>
#include <string.h>

int main(){
	char username[50], password[50], entryusername[50], entrypass[50];
	printf("Set your username: ");
	scanf("%s", username);
	printf("Set your password: ");
	scanf("%s", password);
	
	printf("LOGIN\n");
	printf("Enter your username: ");
	scanf("%s", entryusername);
	printf("Enter your password: ");
	scanf("%s", entrypass);
	
	if(strcmp(username, entryusername) == 0){
		if(strcmp(password, entrypass) == 0){
			printf("Login Successful");
		}
		else{
			printf("Incorrect Password");
		}
	}
	else{
		printf("Username not found");
	}
}
