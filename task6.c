#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
    double r, h, v, s; 
    printf("r = "); 
    scanf("%lf", &r); 
    printf("h = "); 
    scanf("%lf", &h);
    v = M_PI * r * r * h;
    s = 2 * M_PI * r * (r + h);
    printf("v = %lf \n", v); 
    printf("s  = %lf", s); 
    return 0;
}