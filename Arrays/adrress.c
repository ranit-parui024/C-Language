#include<stdio.h>
int main () {
    int arr[7] = {4, 7, 89, 60, 59, 39, 28};
    // int *ptr = &arr[3];
    // int *ptr1 = &arr[4];
    // printf("%p\n", ptr);
    // printf("%p\n", *ptr1);
    // printf("%p", &arr[3]);
    for(int i = 0; i <= 6; i++){
        printf("Address of %d element of the array is : %p\n",i, &arr[i]);
    }
    return 0;
}