#include<stdio.h>
int main () {
    char operator;
    double num1 = 0.00;
    double num2 = 0.00;
    double result = 0.00;

    printf("num1 = ");
    scanf("%lf", &num1);

    printf("operator = ");
    scanf(" %c", &operator);


    printf("num2 = ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+' : 
            result = num1 + num2;
            printf("%lf + %lf = %lf", num1, num2, result);
            break;
        case '-' :
            result = num1 - num2;
            printf("%lf - %lf = %lf", num1, num2, result);
            break;
        case '*':
            result = num1*num2;
            printf("%lf * %lf = %lf", num1, num2, result);
            break;
        case '/':
            result = num1/num2;
            printf("%lf / %lf = %lf", num1, num2, result);
            break;
        default :
            printf("invalid operator");
    }
    return 0;
}