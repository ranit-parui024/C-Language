#include<stdio.h>
int ncr1 (int n ,int r){
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

    int result = nfact/(rfact*nrfact);

    return result;
}

int main () {
    int n, r;
    printf("Enter n = ");
    scanf("%d", &n);
    printf("Enter r = ");
    scanf("%d", &r);

    int ncr = ncr1(n, r);
    printf("%dC%d is = %d", n, r, ncr);
    return 0;
}