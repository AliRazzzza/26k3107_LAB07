#include <stdio.h>
int main(){
    int i, j;
    for(i = 1; i<=8; i++){
        for(j = 1; j<=i; j++){
            if(i<=3 || j<=3){
                printf("1");
            } else if((j) % 4 == 0){
                printf("0");
            } else{
                printf("1");
            }
        }
        printf("\n");

    }
    return 0;
}   
