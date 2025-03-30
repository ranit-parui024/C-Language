//WAP to print alphabet triangle

#include<stdio.h>
int main () {
    int n;
    printf("Enter number of rows = ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){ // creating rows
        printf("(%d) ", i); // denoting row number
        for(int j = 1; j <= i; j++){ // creating colms
            printf(" %c ", j + 64);
        }
        printf("\n");
    }
}