#include<stdio.h>
int main () {
    char s[] = "parakram";
    int n = sizeof(s)/sizeof(s[0]); // size of string
    printf("%d\n", n);
    printf("%s\n", s);
    return 0;
}