#include <stdio.h>

int Ex2(void) {
  int vP, vC, troco; // vP = valor pago, vC = valor compra

  printf("Digite o valor da compra\n");
  scanf("%d", &vC);
  printf("Digite o valor pago\n");
  scanf("%d", &vP);

  troco = vP - vC;

  printf("resultado é: %d\n", troco);

  return 0;
}