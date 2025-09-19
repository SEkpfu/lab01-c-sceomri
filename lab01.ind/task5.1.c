#include <stdio.h>
#define _USE_OF_MATH
#include <math.h>
int main (void) {
    double x, y,z;
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);
    int ctg= cos(M_PI *x)/ sin(M_PI *x);
    z=  pow(1- tan(x), ctg) + cos(x-y);
    printf("z = %.5f", &z);
    return 0;

}