#include <stdio.h>

int Ex12(void) {

  float salario, c1, c2, c1m, c2m, sf, c1f, c2f;

  salario = 1200;
  c1 = 200;
  c2 = 120;

  c1m = c1 * 0.02;
  c2m = c2 * 0.02;

  c1f = c1 + c1m;
  c2f = c2 + c2m;

  sf = salario - (c1f + c2f);

  printf("O salário de joão é: %f\n", salario);
  printf("E o resto do salário é: %f", sf);

  return 0;
}