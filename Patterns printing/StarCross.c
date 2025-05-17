//WAP to print star cross

#include<stdio.h>
int main () {
    int n;
    printf("Enter row = ");
    scanf("%d", &n);
    if( n%2 == 0){
        printf("pls put odd numbers");
        return ;
    }
    

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if ( i == j || (i + j) == ( n + 1 )){
                printf("* ");
            }
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}
