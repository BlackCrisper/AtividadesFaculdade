#include <stdio.h>

int Ex3() {
  float fatorial;
  int num;
  printf("Digite o valor\n");
  scanf("%d", &num);

  for (fatorial = 1; num > 1; num-- /*num = num -1*/) {
    fatorial = fatorial * num;
  }

  printf("Valor Fatorial é: %f", fatorial);
  return 0;
}