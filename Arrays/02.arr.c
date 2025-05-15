#include<stdio.h>
int main () {
    int marks[10] = {36, 70, 80, 90, 33, 50, 100, 29, 68, 97};
    
    for(int i = 0; i <= 9; i++) {
        if(marks[i] <= 35 ){
        printf("roll 0f the student is = %d\n", i);
        }
    }

return 0;
}