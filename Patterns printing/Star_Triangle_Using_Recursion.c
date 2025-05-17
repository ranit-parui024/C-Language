// star triangle using recursion

#include<stdio.h>
void dst ( int n ) {
    if( n > 1 )
        dst ( n-1 );
    for( int i = 0; i < n; i++){
        printf("* ");
    }
    printf("\n");
}
int main () {
     dst (9);
    return 0;
}