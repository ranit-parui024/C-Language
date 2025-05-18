#include<stdio.h>

void increasing (int y, int x){
    if( y > x )
        return;
    printf("%d\n", y);
    return increasing( y + 1, x);
}

int main () {
    int n;
    printf("Enter n = ");
    scanf("%d", &n);

    increasing (1, n);
    return 0;
}