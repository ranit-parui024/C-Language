// WAP to print Alphabet + Number triangle2.0

#include<stdio.h>
int main () {
    int n;
    printf("Enter n = ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(i % 2 == 0) {
                printf("%c ", j + 64);
            }
            else {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}
