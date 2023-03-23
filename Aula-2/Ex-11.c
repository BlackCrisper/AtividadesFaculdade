#include <stdio.h>

int Ex11(void) {
  float lata, garrafa600, garrafa2l, litros;

  printf("Digite a quantidade de latas: \n");
  scanf("%f", &lata);

  printf("Digite a quantidade de Garrafas de 600: \n");
  scanf("%f", &garrafa600);

  printf("Digite a quantidade de Garrafas de 2L: \n");
  scanf("%f", &garrafa2l);

  litros = ((lata * 350) + (garrafa600 * 600) + (garrafa2l * 2000)) / 1000;

  printf("Quantidade de Litros: %f", litros);

  return 0;
}
