#include <stdio.h>
int main() {
    int num;
    printf("four digit number = ");
    scanf("%d", &num);
    if (num < 1000 || num > 9999) {
      printf("Error");
      return 1;
    }
    int num1, num4;
    num1 = num / 1000;
    num4 = num % 10;
    printf("num1 = %d", num1);
    printf("num4 = %d", num4);
    return 0;
}
