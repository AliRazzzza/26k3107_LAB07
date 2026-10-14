#include <stdio.h>

int main(){
    int i, j, num;

    for(i = 1; i <= 5; i++){
        for (j = 1; j <= i; j++) {
            if (j == 1)
                num = 1;
            else if (j == 2)
                num = 4;
            else if (j == 3)
                num = 27;
            else if (j == 4)
                num = 16;
            else
                num = 125;

            printf("%d ", num);
        }

        printf("\n");
    }

    return 0;
}
