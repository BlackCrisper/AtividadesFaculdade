#include <stdio.h>

int Ex01(void) {
  int base, altura, area;

  printf("Digite o valor da Base\n");
  scanf("%d", &base);
  printf("Digite o valor da altura\n");
  scanf("%d", &altura);

  area = base * altura;

  printf("resultado é: %d\n", area);

  return 0;
}