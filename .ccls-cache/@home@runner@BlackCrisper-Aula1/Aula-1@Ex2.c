#include <stdio.h>

int Ex2(void) {
  float vP, vC, troco; // vP = valor pago, vC = valor compra

  printf("Digite o valor da compra\n");
  scanf("%f", &vC);
  printf("Digite o valor pago\n");
  scanf("%f", &vP);

  troco = vP - vC;

  printf("resultado é: %f\n", troco);

  return 0;
}