#include<stdio.h>

void print (int x){
    for(int i=1; i <= x; i++){
        printf("%d ", i);
    }
}

int main () {
    int n;
    printf("How many numbers you want to print?? = ");
    scanf("%d", &n);

    print(n);
    return 0;
}