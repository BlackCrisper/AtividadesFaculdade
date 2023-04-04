#include <stdio.h>

int Ex01(void) {
  float base, altura, area;

  printf("Digite o valor da Base\n");
  scanf("%f", &base);
  printf("Digite o valor da altura\n");
  scanf("%f", &altura);

  area = base * altura;

  printf("resultado é: %f\n", area);

  return 0;
}