#include <stdio.h>
int main() {
  double a, b, summ, raz, pr;
  printf("a= \n");
  scanf("%lf", &a);
  printf("b= \n");
  scanf("%lf", &b);
  summ = a + b;
  printf("summ = %lf \n", summ);
  raz = a - b;
  printf("raz= %lf \n", raz);
  pr = a * b;
  printf("pr = %lf \n", pr);
  return 0;
}