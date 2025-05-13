#include<stdio.h>

int factorial(int x){
    if ( x == 0 )
        return 1;
    return x * factorial(x-1);
}
int main () {
    int n;
    printf("Enter the number = ");
    scanf("%d", &n);

    printf("Factorial of the given number %d is = %d", n, factorial(n));

    return 0;
}