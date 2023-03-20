#include <stdio.h>

int Ex7() {
  float num, dolar, convertido;
  printf("Digite o valor: R$\n");
  scanf("%f", &num);
  printf("Digite o valor da Cotação: R$\n");
  scanf("%f", &dolar);

  convertido = num / dolar;

  printf("Valor em Dolar é: %f", convertido);
  return 0;
}