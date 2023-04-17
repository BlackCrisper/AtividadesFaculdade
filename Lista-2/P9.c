#include <stdio.h>

int P9(void) {
  int idade, tempo;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("digite seu tempo de trabalho: ");
  scanf("%d", &tempo);

  if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
    printf("Pode se aposentar");
  } else {
    printf("Não pode se aposentar");
  }

  return 0;
}
