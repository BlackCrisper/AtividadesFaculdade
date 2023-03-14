#include <stdio.h>

int Ex1(void) {
  int num1, num2, mult;

  printf("Digite um valor inteiro\n");
  scanf("%d", &num1);
  printf("Digite um valor inteiro\n");
  scanf("%d", &num2);

  mult = num1 * num2;

  printf("resultado é: %d\n", mult);

  return 0;
}