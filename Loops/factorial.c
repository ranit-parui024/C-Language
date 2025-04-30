#include<stdio.h>
int main () {
    int n;
    printf("Enter n = ");
    scanf("%d", &n);
    int r;
    printf("Enter r = ");
    scanf("%d", &r);

    int nfact = 1; // n!
    int rfact = 1; // r!
    int nrfact = 1; // (n- r)!

    for(int i=2; i<=n; i++){
        nfact = nfact*i;
    }
    for(int i=2; i<=r; i++){
        rfact = rfact*i;
    }
    int nr = n - r;
    for(int i=2; i<=nr; i++){
        nrfact = nrfact*i;
    }

    int ncr = nfact/(rfact*nrfact);
    printf("nCr of the given number is = %d", ncr);
    return 0;
}