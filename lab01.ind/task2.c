#include <stdio.h>
int main (void) {
    int num, one,last,summ;
    printf("Введите трехзначное число = ", num);
    scanf("%d", &num);
    one = num / 100;
    last = num % 100;
    int two = (last / 10);
    int three = last % 10;
    summ = two + three;
    int number = summ * 100 + one *10 + one;
    printf("%d",number);
    return 0;
}