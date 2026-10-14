#include <stdio.h>

int main(){
    int a[3][3];
    int i, j;
    int null = 1, upper = 1, lower = 1;

    printf("Enter 9 elements of the matrix:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(a[i][j] != 0){
                null = 0;
            }

            if(i > j && a[i][j] != 0){
                upper = 0;
            }

            if(i < j && a[i][j] != 0){
                lower = 0;
            }
        }
    }

    printf("\nMatrix:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("It is a Square Matrix\n");

    if (null == 1)
        printf("It is a Null Matrix\n");

    if (upper == 1)
        printf("It is an Upper Triangular Matrix\n");

    if (lower == 1)
        printf("It is a Lower Triangular Matrix\n");

    printf("\nDiagonal elements: ");
    for(i = 0; i < 3; i++){
        printf("%d ", a[i][i]);
    }

    printf("\nUpper triangular elements: ");
    for(i = 0; i < 3; i++){
        for(j = i; j < 3; j++){
            printf("%d ", a[i][j]);
        }
    }

    printf("\nLower triangular elements: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j <= i; j++){
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}
