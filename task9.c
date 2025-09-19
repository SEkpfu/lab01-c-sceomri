#include <stdio.h>
int main() {
int n, s, m, h;
printf("print seconds= ");
scanf("%d", &n);
s = n;
m = (n % 3600) / 60;
h = n / 3600;
printf("hour: %d\n", h);
printf("seconds: %d\n", s);
printf("minutes: %d\n", m);
return 0;
}