#include <stdio.h>

int Ex07(void) {

  int dinheiro, p, m, g;

  // p = pequeno, m = media , g = grande

  printf("Informe a quantidade de camisas P: \n");
  scanf("%d", &p);
  printf("Informe a quantidade de camisas M: \n");
  scanf("%d", &m);
  printf("Informe a quantidade de camisas G: \n");
  scanf("%d", &g);

  dinheiro = (p * 10) + (m * 12) + (g * 15);

  printf("O valor total é: R$%d", dinheiro);

  return 0;
}