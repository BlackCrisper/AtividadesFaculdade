#include <stdio.h>

int Ex5(void) {
  int num1, antes, depois;

  printf("Digite um valor inteiro\n");
  scanf("%d", &num1);

  antes = num1 - 1;
  depois = num1 + 1;

  printf("Antecessor: %d\n", antes);
  printf("Sucessor: %d\n", depois);

  return 0;
}