#include <stdio.h>

int main() {
    float temperature, converted;
    char unit;

    printf("Enter temperature (e.g., 35F or 20C): ");
    scanf("%f%c", &temperature, &unit);

    if (unit == 'F' || unit == 'f') {
        converted = (temperature - 32) * 5 / 9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, converted);
    } else if (unit == 'C' || unit == 'c') {
        converted = (temperature * 1.8) + 32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, converted);
    } else {
        printf("Invalid input. Please specify the unit as 'C' or 'F'.\n");
    }

    return 0;
}
