#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 6;
    int ans = (rand() % (max - min + 1)) + min;

    do{
        printf("Guess a number between %d - %d : ", min, max);
        scanf("%d", &guess);
        tries++;
    }while (ans == guess)

    
    return 0;
}