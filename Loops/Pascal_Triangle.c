#include<stdio.h>

int main () {
    int n;
    printf("Enter n = ");
    scanf("%d", &n);

    // code for pascal triangle
    for(int i=0; i <= n; i++){
        // for spaces
        for(int space = 1; space <= n-i; space ++){
            printf(" ");
        }
        // for numbers
        int first  = 1;
        for(int j=0; j <= i; j++){
            printf("%d ", first);
            first = first * (i-j)/(j+1);
        }
        printf("\n");
    }
return 0;
}