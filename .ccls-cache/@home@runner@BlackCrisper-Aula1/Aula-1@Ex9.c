#include <stdio.h>

int EX9() {
  float ht,sm,he; //ht = Hora Trabalhada, he = Hora extra, sm = Salário Mínimo 
  
  printf("Digite o valor: R$\n");
  scanf("%f", &sm);

  ht = sm/8;
  he = sm/4;

  printf("Valor da Hora Trabalhada é: R$ %f", ht);
  printf("\nValor da Hora Extra é: R$ %f", he);
  return 0;
}