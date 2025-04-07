#include<stdio.h>
//int fun( int , int ); // it is --> forward diclaration
                        // prototype of the functions, Name of Funcn - fun
                      // (int , int ) --> /funcn will take two int as argument
int fun ( int x, int y) {
     int z;
     z = x * y;
    return z;
}

int main () {
    int a =  10, b = 20, c;
    c = fun( a, b); // calling the function
    printf("%d", c);
    return 0;
}