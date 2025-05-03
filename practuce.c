#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// Function to calculate nCr (combinations)
int combinations(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's triangle
void printPascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        // Print numbers
        for (int j = 0; j <= i; j++) {
            printf("%4d", combinations(i, j));
        }
        printf("\n");
    }
}

int main() {
    int numRows;

    printf("Enter the number of rows: ");
    scanf("%d", &numRows);

    printPascalTriangle(numRows);

    return 0;
}