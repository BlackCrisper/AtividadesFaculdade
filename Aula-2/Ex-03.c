#include <stdio.h>

int Ex03(void) {
  float pf, br, lucro, guardar, pfp, brp;

  printf("Digite a Quantidade de Pães frenceses\n");
  scanf("%f", &pf);

  printf("Digite a Quantidade de Broas\n");
  scanf("%f", &br);

  pfp = pf * 0.12;
  brp = br * 1.50;

  lucro = pfp + brp;

  guardar = lucro * 0.01;

  printf("O lucro é: %f\n", lucro);

  printf("O valor para poupança é: %f\n", guardar);
  return 0;
}