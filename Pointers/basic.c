#include<stdio.h>
int main () {
    int a = 7;
    int *x = &a;

    printf("%p", x);
    return 0;
}