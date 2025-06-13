#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int reversed = 0, remainder, original;
    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return original == reversed;
}

// Function to print palindrome numbers in a given range
void printPalindromes(int start, int end) {
    printf("Palindrome numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int startRange, endRange;

    printf("Enter the starting range: ");
    scanf("%d", &startRange);

    printf("Enter the ending range: ");
    scanf("%d", &endRange);

    printPalindromes(startRange, endRange);

    return 0;
}