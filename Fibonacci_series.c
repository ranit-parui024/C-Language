#include<stdio.h>
int main () {
    int n , first = 0, second = 1, next, i ;

    printf("Enter number of terms  = ");
    scanf("%d", &n);
    printf("fibonacci series : ");

    for(i = 0; i <= n; i++){
        if(i <= 1){
            next = i;
        }
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}