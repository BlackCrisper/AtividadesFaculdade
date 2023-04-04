
#include <stdio.h>

int Ex02(void) {
  int ferraduras, cavalos;

  printf("Digite a Quantidade de Cavalos\n");
  scanf("%d", &cavalos);

  ferraduras = cavalos * 4;

  printf("resultado é: %d\n", ferraduras);

  return 0;
}