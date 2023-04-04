#include <stdio.h>

int Ex09(void) {

  int queijo, presunto, carne, quantidade;

  printf("Digite a Quantidade de sanduíche: \n");
  scanf("%d", &quantidade);

  queijo = 100 * quantidade;
  presunto = 50 * quantidade;
  carne = 100 * quantidade;

  printf("\n\nQueijo: g %d\nPresunto: g %d\nCarne: g %d", queijo, presunto,
         carne);

  return 0;
}