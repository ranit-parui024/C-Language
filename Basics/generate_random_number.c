#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {

    srand((time(NULL)));
    
    int min = 1;
    int max = 6;
    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;
    int randomNum4 = (rand() % (max - min + 1)) + min;


    printf("%d, %d, %d, %d", randomNum1, randomNum2, randomNum3, randomNum4);

    return 0;
}