#include <stdio.h>
int main() {
double a, b, c, v, s;
printf("a = \n");
scanf("%lf ", &a);
printf("b = \n");
scanf("%lf ", &b);
printf("c = \n");
scanf("%lf ", &c);
v = a * b * c;
s = 2 * (a*b + b*c + a*c);
printf("v = %lf\n", v);
printf("s = %lf \n", s);
return 0;
}