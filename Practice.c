#include<stdio.h>

void decreasing (int x){
    if ( x == 0 )
        return ;
    printf("%d ", x);
    decreasing ( x - 1 );
    return ;
}

int main () {
    int n;
    printf("Enter n = ");
    scanf("%d ", &n);
    decreasing (n);
    return 0;
}