#include <stdio.h>

int Ex04(void) {

  char nome[1000];
  int idade, dias;

  printf("Digite seu nome: \n");
  scanf("%s", nome);

  printf("Digite sua idade: \n");
  scanf("%d", &idade);

  dias = idade * 365;

  printf("Seu nome é %s e sua idade em dias é %d \n", nome, dias);

  return 0;
}