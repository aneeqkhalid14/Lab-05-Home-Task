#include <stdio.h>

int main(){
    int permissions;
    printf("enter permissions value(1 FOR READ 2 FOR WRITE 4 FOR EXECUTE):  ");
    scanf("%d", &permissions);
    if(permissions < 0 || permissions > 7){
        printf("invalid input");
	}
    else if(permissions & 4){
        printf("access granted: full control");
    }
    else if((permissions & 1) && (permissions & 2)){
        printf("access granted: read and write");
    }
    else if((permissions & 1) && !(permissions & 2)){
        printf("access granted: read-only");
    }
    else{
        printf("access denied");
    }
}

