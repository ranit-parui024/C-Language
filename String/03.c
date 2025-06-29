#include<stdio.h>
#include<string.h>
int main () {
    char ch [ ] = "parakram";
    printf("%lu\n", strlen(ch));
    printf("%lu\n", strlen(ch + 2));

    return 0;
}