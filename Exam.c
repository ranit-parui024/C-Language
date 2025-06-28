#include <stdio.h>

int main() {
    int n = 100;
    int long long sum = 0, sum_of_squares = 0, square_of_sum, difference;

    for (int i = 1; i <= n; i++) {
        sum += i;               // Sum of first n natural numbers
        sum_of_squares += i * i; // Sum of squares
    }

    square_of_sum = sum * sum;  // Square of the sum
    difference = square_of_sum - sum_of_squares;

    printf("The difference is: %lld\n", difference);

    return 0;
}
