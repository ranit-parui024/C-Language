#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i = 1; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}
int main() {
    int n, r;
    printf("Enter n = ");
    scanf("%d", &n);
    printf("Enter r = ");
    scanf("%d", &r);

    int nr = n - r;
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(nr);

    int ncr = nfact/(rfact*nrfact);
    printf("%dC%d = %d",  n, r, ncr);
    return 0;
}