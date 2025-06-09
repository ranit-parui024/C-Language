#include<stdio.h>
int main () {
    int arr[7] = {8, 39, 78, 40, 67, 2, 47};
    int f = 0;
    int arrlength = sizeof(arr)/sizeof(int);

    for(int i = 0; i < arrlength ; i++){
        if(arr[i] == 98){
            f = 1 ; break;
        }
    }
        if(f==1){
            printf("Element found");
        }
        else {
            printf("Element not found");
        }
    return 0;
}