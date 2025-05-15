#include<stdio.h>
int main () {
    int arr[7];

    for(int i = 0; i <= 6; i++){
        printf("Enter element number %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Our array in reverse is =  ");
    for(int i = 6; i >= 0; i--){
        printf("%d ", arr[i]);
    }
return 0;
}