#include<stdio.h>

void swap (int* x , int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main () {
    int a = 78;
    int b = 56;
    swap(&a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}