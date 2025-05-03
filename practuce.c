#include<stdio.h>

int fact(int x){
    if( x == 0)
        return 1;
    return x*fact(x-1);
}

int comb(int x, int y){
    int nCr = fact(x) / ( fact(y)* fact(x-y) );
    return nCr;
}

void pascaltriangle(int x) {
    for(int i = 0; i < x; i++){
        for(int k = 1; k <= x-i; k++){
            printf("  ");
        }
    for(int j = 0; j <= i; j++){
        printf("%4d", comb(i, j));
    }
    printf("\n");
    }
}


int main (){
    int n;
    printf("Enter number of rows = ");
    scanf("%d", &n);

    pascaltriangle (n);
    return 0;
}