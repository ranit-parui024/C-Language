#include<stdio.h>

int min (int x, int y){
    if (x < y) return x;
    else return y;
}

int gcd(int x, int y){
    int hcf;
    for(int i = 1; i <= min(x,y); i++){
        if (x%i == 0 && y%i == 0){
            hcf = i;
        }
    }
    return hcf;
}
int main () {

    int a , b;
    printf("Enter 1st no. = ");
    scanf("%d", &a);
    printf("Enter 2nd no. = ");
    scanf("%d", &b);

    int hcf = gcd(a,b);
    printf("The HCF of %d & %d is : %d", a, b, hcf);

    return 0;
}