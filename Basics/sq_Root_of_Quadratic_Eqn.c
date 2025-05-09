#include <stdio.h>
#include <math.h> // Required for sqrt()

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // Case 1: Real and distinct roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Distinct real roots: %.2lf and %.2lf\n", root1, root2);
    }
    // Case 2: Real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Equal real roots: %.2lf and %.2lf\n", root1, root2);
    }
    // Case 3: Complex roots
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", 
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}