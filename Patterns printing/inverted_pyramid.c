#include<stdio.h>
int main () {

    int n;
    printf("Enter number of rows = ");
    scanf("%d", &n);
    int nst = n;
    for(int i = n; i >= 0; i--){
        for(int space = n - i; space >= 1; space--){
            printf("  ");
        }
        for(int j = nst; j >= 0; j--){
            printf("* ");
        }
        nst = nst - 2;
        printf("\n");
    }
    return 0;
}