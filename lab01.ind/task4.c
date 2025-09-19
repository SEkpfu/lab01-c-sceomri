#include <stdio.h>
#include <math.h>
int main() {
    double x, y;
    printf("x = ");
    scanf("%lf", &x);
    y = (((((x - 3)*x + 2)*x - 1)*x + 4)*x - 13)*x + 2;
    printf("y = %.3f", y);
    return 0;
}