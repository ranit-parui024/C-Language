#include<stdio.h>

void sum (int x, int y){
    if ( x == 0 ) {
        printf("The sum of the digit upto given n is = %d ", y);
        return ;
    }
    sum ( x - 1, y + x);
    return ;
}
int main ( ) {
    int n ;
    printf("Enter n = ");
    scanf("%d", &n);
    sum( n, 0 );
    return 0;
}