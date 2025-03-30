#include <stdio.h>
int main() {
  float a,  b, c, d, e;
  
  printf("Enter a = ");
  scanf("%f", &a);
  printf("Enter b = ");
  scanf("%f", &b);
  printf("Enter c = ");
  scanf("%f", &c);
  printf("Enter d = ");
  scanf("%f", &d);
  printf("Enter e = ");
  scanf("%f", &e);

  float Avg = (a+b+c+d+e)/5;
  
  printf("the average value of given numbers is %.2f\n",Avg);
  
  return 0;

}


