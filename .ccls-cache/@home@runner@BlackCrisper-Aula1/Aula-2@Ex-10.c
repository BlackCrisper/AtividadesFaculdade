#include <stdio.h>

int Ex10(void) {

  float c, f;

  printf("Digite a temperatura em Celcius: \n");
  scanf("%f", &c);

  f = c * 1.8 + 32;

  printf("A temperatura em Fahrenheit é: %f", f);

  return 0;
}