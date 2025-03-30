#include<stdio.h>
int main() {
    int age;
    printf("Enter your age = ");
    scanf("%d", &age);

    printf("Three Imeditate Intergral ranges\n");
    printf("%d to %d", age - 1, age + 1);
    printf("%d to %d", age - 2, age + 2);
    printf("%d to %d", age - 3, age + 3);

    return 0;
    
}
