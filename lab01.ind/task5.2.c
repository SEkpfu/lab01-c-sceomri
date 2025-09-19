#include <stdio.h>
#include <stdlib.h>
int main (void) {
    double x, y;
    printf("x = ");
    scanf("%lf", &x);
    y = abs(x*x - x*x*x) - ((7 *x)/(x*x*x-15*x));
    printf("y = %.e", y);
    return 0;
}