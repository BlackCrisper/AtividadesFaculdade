#include <stdio.h>

int Ex7() {
  float num, dolar, convertido;
  printf("Digite o valor: R$\n");
  scanf("%f", &num);

  dolar = num / 5.25;

  printf("Valor em Dolar é: %f", dolar);
  return 0;
}