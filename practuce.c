#include<stdio.h>

void combination(int x, int y){
    int ncr = factorial(x)/ factorial(y)*factorial(x-y);
    return ncr;
}
void pascaltriangle(int x){
    for(int i = 0; i <= x; i++){
        for(int space = 1; space <= x-i; space ++){
            printf("  ");
        }
        for(int j = 0; j <= i; j++){
            int iCj = combination (i,j);
            printf("%4d" , iCj );
        }
        printf("\n");
    }
}
int main () {
    int n;
    printf("Enter row no. = ");
    scanf("%d", n);

    pascaltriangle(n);
    return 0;
}

