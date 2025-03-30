//WAP to print odd number triangle

// #include<stdio.h>
// int main (){
//     int n;
//     printf("Enher n = ");
//     scanf("%d", &n);

//     for(int i = 1; i <= n; i = i + 2){
//         for(int j = 1; j <= i; j++){
//             if( j % 2 != 0){
//                 printf("%d ", j);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main (){
    int n;
    printf("Enher n = ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i ++){
        int a  = 1;
        for(int j = 1; j <= i; j++){
                printf("%d ", a);
                a = a + 2;
            }
            printf("\n");
        }
        return 0;
        
}