#include <stdio.h>

int Ex05(void) {
  float vp, vl, l; //vp = valor pago, vl = valor do litro, l = quantidade em litros

  printf("Digite o valor do Litro\n");
  scanf("%f", &vl);
  printf("Digite o valor Pago\n");
  scanf("%f", &vp);

  l = vp / vl;

  printf("resultado é: %f\n", l);

  return 0;
}