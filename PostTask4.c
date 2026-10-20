#include <stdio.h>
int main(){
    int marks[4][2];
    int i,j;
    int total = 0, midT= 0, finalT= 0;
    int highestM, lowestM, highestF, lowestF, high, low;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 2; j++){
            printf("Enter marks for student %d: ", i+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        total += marks[i][0] + marks[i][1];
        midT += marks[i][0];
        finalT += marks[i][1];
    }
    highestM = marks[0][0];
    lowestM = marks[0][0];
    for(i = 0; i < 4; i++){
        if(marks[i][0] > highestM)
            highestM = marks[i][0];

        if(marks[i][0] < lowestM)
            lowestM = marks[i][0];
    }
    highestF = marks[0][1];
    lowestF = marks[0][1];
    for(i = 0; i < 4; i++){
        if(marks[i][1] > highestF)
            highestF = marks[i][1];

        if(marks[i][1] < lowestF)
            lowestF = marks[i][1];
    }   
     high = marks[0][0];
    low = marks[0][0];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            if (marks[i][j] > high)
                high = marks[i][j];

            if (marks[i][j] < low)
                low = marks[i][j];
        }
    }
    printf("\nHighest marks over all: %d", high);
    printf("\nLowest marks over all: %d", low);
    printf("\nHighest mids marks: %d", highestM);
    printf("\nLowest mids marks: %d", lowestM);
    printf("\nHighest final marks: %d", highestF);
    printf("\nLowest final marks: %d", lowestF);
    printf("\nTotal marks: %d", total);
    printf("\nAverage mids: %d", midT/4);
    printf("\nAverage final: %d", finalT/4);

    return 0;
}   
