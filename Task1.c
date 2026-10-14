#include <stdio.h>

int main(){
    float items[5][2];
    float total, grandTotal = 0;
    int i, j;

    for(i = 0; i < 5; i++){
        printf("Enter quantity of product %d: ", i + 1);
        scanf("%f", &items[i][0]);

        printf("Enter price of product %d: ", i + 1);
        scanf("%f", &items[i][1]);
    }

    printf("\nProduct\tQuantity\tPrice\tTotal\n");
    for(i = 0; i < 5; i++){
        total = items[i][0] * items[i][1];
        grandTotal = grandTotal + total;

        printf("%d\t%.0f\t\t%.2f\t%.2f\n", i + 1, items[i][0], items[i][1], total);
    }

    printf("\nGrand Total = %.2f\n", grandTotal);
    return 0;
}
