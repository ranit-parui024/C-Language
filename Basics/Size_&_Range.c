#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("%-20s %-10s %-30s\n", "Type", "Size (bytes)", "Range");
    printf("--------------------------------------------------------------------------\n");

    // Integer types
    printf("%-20s %-10zu %d to %d\n", "char", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("%-20s %-10zu %d to %d\n", "signed char", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    printf("%-20s %-10zu %u to %u\n", "unsigned char", sizeof(unsigned char), 0, UCHAR_MAX);

    printf("%-20s %-10zu %d to %d\n", "short", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("%-20s %-10zu %u to %u\n", "unsigned short", sizeof(unsigned short), 0, USHRT_MAX);

    printf("%-20s %-10zu %d to %d\n", "int", sizeof(int), INT_MIN, INT_MAX);
    printf("%-20s %-10zu %u to %u\n", "unsigned int", sizeof(unsigned int), 0U, UINT_MAX);

    printf("%-20s %-10zu %ld to %ld\n", "long", sizeof(long), LONG_MIN, LONG_MAX);
    printf("%-20s %-10zu %lu to %lu\n", "unsigned long", sizeof(unsigned long), 0UL, ULONG_MAX);

    printf("%-20s %-10zu %lld to %lld\n", "long long", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("%-20s %-10zu %llu to %llu\n", "unsigned long long", sizeof(unsigned long long), 0ULL, ULLONG_MAX);

    // Floating-point types
    printf("%-20s %-10zu %e to %e\n", "float", sizeof(float), FLT_MIN, FLT_MAX);
    printf("%-20s %-10zu %e to %e\n", "double", sizeof(double), DBL_MIN, DBL_MAX);
    printf("%-20s %-10zu %Le to %Le\n", "long double", sizeof(long double), LDBL_MIN, LDBL_MAX);

    return 0;
}