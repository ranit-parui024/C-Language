#include<stdio.h>
int factorial (int x){
    int fact = 1;
    for(int i=1; i <= x; i++){
        fact = fact*i;
    }
    return fact;
}
int comb (int x, int y){
    int ncr = factorial(x)/(factorial(y)*factorial(x-y));
    return ncr;
}

int main () {
    int n;
    printf("Enter n = ");
    scanf("%d", &n);

    for(int i=0; i <= n; i++){
        for(int j=0; j <= i; j++){
            int iCj = comb(i,j);
            printf("%d ", iCj);
        }
        printf("\n");
    }
return 0;
}