#include<stdio.h>

int add (int x, int y) {
     return x + y;
}

int main () {
    int a, b;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);

    int sum = add(a, b);
    printf("%d", sum);
    return 0;
}
