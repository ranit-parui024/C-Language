#include<stdio.h>
int main () {
    int a = 89;
    int *x = &a;
    int **y = &x;
    int ***z = &y;

    printf("%d\n", a);
    printf("%d\n", *x);
    printf("%d\n", **y);
    printf("%d", ***z);
    return 0;
}