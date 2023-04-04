#include <stdio.h>

int Ex06(void) {
  float vpe, total; // vpe = valor do peso, vpr = valor do prato
  const float vpr = 12;
  printf("Digite o valor do peso\n");
  scanf("%f", &vpe);

  total = vpe * vpr;

  printf("resultado é: %f\n", total);

  return 0;
}