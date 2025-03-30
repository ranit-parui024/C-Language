//WACP to find the roots of a Quadratic equation. (using if else statement)
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("root1 = %.2lf\nroot2 = %.2lf\n", root1, root2);
    } 
    else if (discriminant == 0) {
        // One real root (repeated)
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("root1 = root2 = %.2lf\n", root1);
    } 
    else {
        // Complex roots
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different:\n");
        printf("root1 = %.2lf+%.2lfi\n", realPart, imagPart);
        printf("root2 = %.2lf-%.2lfi\n", realPart, imagPart);
    }
    
    return 0;
}
