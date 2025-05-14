#include<stdio.h>
int main () {
    int arr[5] = {2, 4, 6, 8, 1}; // declaration + initialization
    // 5 boxes has created
    arr[3] = 50; // value of index no 3 has updated
    printf("%d\n", arr[3]);

    for( int i = 0; i <= 4; i++){
        printf("%d ", arr[i]); // printing all the elements of array
    }
    return 0;
}