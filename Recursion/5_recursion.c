#include<stdio.h>
int sum (int x){
    if( x == 1 ){
        return 1;
    }
    return x * sum(x-1);
}
int main ( ) {
    int n;
    printf("Enter n = ");
    scanf("%d", &n);

    printf("The sum of the digits upto %d is = %d", n, sum(n));
    return 0;
}