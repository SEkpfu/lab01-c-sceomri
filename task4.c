#include <stdio.h>
int main() {
  double r, v;
  const double PI = 3.14159;
  printf("r =");
  scanf("%lf", &r);
  v = 4.0/3.0 * PI * (r*r*r);
  printf("v = %lf \n", v);
return 0;
}

