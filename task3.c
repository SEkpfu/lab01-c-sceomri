#include <locale.h>
int main() {
  setlocale(LC_ALL, "rus");
  double tC, tF, tK;
  printf("градусы  Цельсия= ");
  scanf("%lf", &tC);
  tF = 1.8 * tC + 32 ;
  printf("Градусах шкалы Фаренгейта = %lf", tF);
  tK = tC + 273;
  printf("Градусах шкалы Кельвина  = %lf", tK);
  return 0;
}