#include <stdio.h>

int P1(void) {
  float nota1, nota2, nota3, nota4, media;

  printf("Digite a nota 1: \n");
  scanf("%f", &nota1);
  printf("Digite a nota 2: \n");
  scanf("%f", &nota2);
  printf("Digite a nota 3: \n");
  scanf("%f", &nota3);
  printf("Digite a nota 4: \n");
  scanf("%f", &nota4);

  media = (nota1 + nota2 + nota3 + nota4) / 4;

  if (media >= 7) {
    printf("Aprovado");
  } else {
    printf("Reprovado");
  }

  return 0;
}
