//WAP to print star plus

#include<stdio.h>
int main () {
    int n;
    printf("enter row number n = ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == (n+1)/2 || j == (n+1)/2){
                printf("* ");
            } 
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}