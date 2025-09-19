#include <stdio.h>
#include <locale.h>
#include <math.h>
int main (void) {
    int p1, p2, v1 , v2;
    printf("p1= ");
scanf("%d", &p1);
    printf("p2= ");
scanf("%d", &p2);
    printf("v1= ");
scanf("%d", &v1);
    printf("v2= ");
scanf("%d", &v2);
double p = p1 * 0.123 + p2 * 0.06;
printf("p = %lf", p);
double v = v1 * 0.123 + v2 * 0.06;
printf("v = %lf", v);
double summ = p + v;
printf("summ = %lf", summ);
return 0;
} 