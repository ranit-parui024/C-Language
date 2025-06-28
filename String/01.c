#include<stdio.h>
#include<string.h>
int main () {
    char ch[] = "ranit";

    printf("%s\n", &ch[0]);
    printf("%c\n", ch[0]);
    printf("%lu", strlen(&ch[0]));
    return 0;
}