#include<stdio.h>
int main () {
    struct student {
        char name[20];
        int roll_no;
    };
    struct student s = {"ravi", 120};
    printf("%s\n", s.name);
    printf("%d", s.roll_no);
    return 0;
}