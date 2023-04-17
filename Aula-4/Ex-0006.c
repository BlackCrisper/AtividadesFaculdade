#include <stdio.h>

int Ex0006(void) {

  printf("BlackCrisper Sistemas\n");

    float nota1, nota2, media;
  printf("Digite a nota 1: ");
  scanf("%f", &nota1);
  printf("Digite a nota 2: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  if (media < 4){
    printf("Reprovado\n");
  } else if ( media >=4 && media < 7) {
    printf("Exame\n");
  } else if (media >= 7) {
    printf("Aprovado\n");
  }

  printf("Sua média é: %f", media);
  
  return 0;
}
