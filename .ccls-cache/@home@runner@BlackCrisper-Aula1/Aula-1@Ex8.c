#include <stdio.h>

int Ex8() {
  float grau, radiano;
  const float pi = 3.141592;
  printf("Digite o valor do grau: \n");
  scanf("%f", &grau);

  radiano = grau * pi / 180;

  printf("Valor do Radiano é: %f", radiano);
  return 0;
}