#include <stdio.h>

int Ex8() {
  float grau, radiano, pi;
  printf("Digite o valor do grau: \n");
  scanf("%f", &grau);
  pi = 3.141592;
  radiano = grau * pi / 180;

  printf("Valor do Radiano é: %f", radiano);
  return 0;
}