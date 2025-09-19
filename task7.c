#include <stdio.h>
int main() {
    int a, b, a2, b2, summ; 
    printf("first number = "); 
    scanf("%d", &a); 
    printf("second number = "); 
    scanf("%d", &b);
    a2 = a % 10;
    b2 = b % 10;
    summ = a2+ b2;
    printf("summ last number = %d", summ); 
    return 0;
}