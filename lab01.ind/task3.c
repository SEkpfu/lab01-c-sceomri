#include <stdio.h>
#include <stdlib.h>
int main (void){
    int x, y, z, sum, r;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    printf("z = ");
    scanf("%d", &z);
sum = x + y +z;
r = (sum % 2 == 0)? ((y<z) ? y : z) : (x + y) + (x *y *z);
printf("%d", r);
return 0;
}