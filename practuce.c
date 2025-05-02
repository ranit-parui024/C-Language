// star triangle using recursion

#include<stdio.h>
int main () {
    int n;
    printf("Enter n = ");
    scanf("%d", &n);
    int r;
    printf("Enter r= ");
    scanf("%d", &r);

    int nr = n - r;

    int nfact = 1; // n!
    int rfact = 1; // r!
    int nrfact = 1; // (n-r)!

    int ncr = nfact/(rfact * nrfact);

    for(int i = 1; i <= n; i++){
        nfact = nfact*i;
    }
    for(int i = 1; i <= r; i++){
        rfact = rfact*i;
    }
    for(int i = 1; i <= nr; i++){
        nrfact = nrfact*i;
    }
    printf("%dC%d = %d", n, r, ncr);
    return 0;
}