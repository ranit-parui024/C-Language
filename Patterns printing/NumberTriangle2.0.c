// WAP to print Number triangle2.0

#include<stdio.h>
int main () {
    int n;
    printf("Enter n = ");
    scanf("%d", &n);
    int a = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", a );
            a = a + 1;
        }
        printf("\n");
    }
    return 0;
}