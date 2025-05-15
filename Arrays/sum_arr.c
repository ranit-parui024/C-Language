#include<stdio.h>
int main () {
    int arr[4] = {3, 5, 6, 8}, sum = 0;
    for(int i = 0; i <= 3; i++){
         sum = sum + arr[i]; 
    }
    printf("%d ", sum);
    return 0;
}