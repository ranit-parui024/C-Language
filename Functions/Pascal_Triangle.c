#include<stdio.h>

// code for n!
int factorial (int x){
    if(x == 0)
        return 1;
    return  x*factorial (x-1);
}

// code for nCr
int comb (int x, int y){
    int ncr = factorial(x)/(factorial(y)*factorial(x-y));
    return ncr;
}

// code for pascal triangle
void pascaltriangle(int x){
    for(int i = 0; i < x; i++){
        for(int space = 1; space <= x - i; space ++){
            printf("  ");
        }
        for(int j = 0; j <= i; j++){
            printf("%4d", comb(i,j));
        }
        printf("\n");
    }
}

// main function
int main () {
    int n;
    printf("Enter n = ");
    scanf("%d", &n);

    pascaltriangle(n);
return 0;
}