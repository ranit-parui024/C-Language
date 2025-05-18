#include<stdio.h>

void decreasing (int x){
    if ( x == 0 ) // base case
        return;
    decreasing ( x - 1 ); // call
    printf("%d\n", x); // code
}

int main () {
    int n;
    printf("enter n = ");
    scanf("%d", &n);

    decreasing (n);
    return 0;
}