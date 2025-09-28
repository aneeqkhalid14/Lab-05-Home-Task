#include <stdio.h>

int main(){
    char room, action;
    printf("Enter the room (L for Living room, K for Kitchen): ");
    scanf(" %c", &room);
    printf("Enter the action (L for Lights, T for thermostat): ");
    scanf(" %c", &action);

    if(room == 'L' || room == 'l'){
        if(action == 'L' || action == 'l'){
            printf("Adjusting ambient lighting.");
        }
        else if(action == 'T' || action == 't'){
            printf("Setting living room temperature.");
        }
        else{
            printf("Invalid action");
        }
    }
    else if(room == 'K' || room == 'k'){
        if(action == 'L' || action == 'l'){
            printf("Turning on bright task lighting.");
        }
        else if(action == 'T' || action == 't'){
            printf("Setting kitchen temperature.");
        }
        else{
            printf("Invalid action");
        }
    }
    else{
        printf("Invalid room");
    }
}

