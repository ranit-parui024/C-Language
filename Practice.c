#include<stdio.h>

int factorial(int x){
    if(x == 0)
        return 1;
    else return x * (x - 1);
}

int comb(int x, int y){
    int iCj = factorial(x)/(factorial(y)*factorial( x - y ));
    return iCj;
}

void printpascaltriangle (int x) {
    for(int i = 0; i < x; i++){
        for(int spaces = 1; spaces <= x - i; spaces++){
            printf("  ");
        }
        for(int j = 0; j <= i; j++){
            printf("%4d", comb(i,j));
        }
        printf("\n");
    }
}
int main () {
    int row;
    printf("Enter numbers of rows = ");
    scanf("%d", &row);

    printpascaltriangle(row);
    return 0;
}