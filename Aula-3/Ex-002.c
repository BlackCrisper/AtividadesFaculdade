#include <stdio.h>

int Ex002(void) {

  int idade;

  printf("Digite a Idade: \n");
  scanf("%d", &idade);

  if (idade >= 18) {
    printf("Maior de idade: %d", idade);
  } else {
    printf("Menor de Idade %d", idade);
  }
  return 0;
}