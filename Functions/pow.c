#include<stdio.h>
#include<math.h>
int main() {
    int a, b;
    printf("Enter number a = ");
    scanf("%d", &a);
    printf("Enter power  = ");
    scanf("%d", &b);
    int newnum = pow(a,b);
    printf("power of %d is : %d ", a, newnum);
    return 0;
}