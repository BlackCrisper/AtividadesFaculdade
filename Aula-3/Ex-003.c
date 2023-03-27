#include <stdio.h>

int Ex003(void) {
  int num;

  printf("Digite o numero: \n");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("Esse numero é par: %d", num);
  } else {
    printf("Esse numero é impar: %d", num);
  }

  return 0;
}