#include<stdio.h>
int main () {
    int a = 7;
    int *x = &a; // *x stores address of a
    printf("%p\n", x);
    printf("%p\n", &x);
    printf("%d", *x); // pointing to the value of a
    *x = 78; // address of a changed
    printf("%d", *x);
    return 0;
}