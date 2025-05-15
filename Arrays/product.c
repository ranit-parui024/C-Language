#include<stdio.h>

int main () {
    
    int arr[4] = {2, 5, 6, 7}, product = 1;


    for(int i = 0; i <= 3; i++){
        product = product * arr[i];
    }
    
    printf("product of the elements is : %d ", product );
    
return 0;
}