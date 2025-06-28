#include<stdio.h>
int main () {
    int arr [2] [2] = {{11, 12}, {13, 14}};
    printf("%d\n", arr);
    printf("%d\n", *arr);
    printf("%d\n", **arr);


    printf("%d\n", arr + 1 );
    printf("%d\n", *arr + 1);
    printf("%d\n", **arr + 1);
    return 0;
}