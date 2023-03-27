#include <stdio.h>

int Ex03(void) {
  /* pf = pao frances , br = broa*/
  float pf, br, lucro, guardar;

  printf("Digite a Quantidade de Pães frenceses\n");
  scanf("%f", &pf);

  printf("Digite a Quantidade de Broas\n");
  scanf("%f", &br);

  lucro = (pf * 0.12) + (br * 1.50);

  guardar = lucro * 0.1;

  printf("O lucro é: %f\n", lucro);

  printf("O valor para poupança é: %f\n", guardar);
  return 0;
}