#include <stdio.h>

int P6(void) {
  float altura, peso;
  int sexo;

  printf("Digite sua altura: ");
  scanf("%f", &altura);
  printf("Digite seu sexo\n");
  printf("Digite 1 = homem e 2 = mulher: ");
  scanf("%d", &sexo);

  switch (sexo) {
  case 1:
    peso = (72.7 * altura) - 58;
    break;
  case 2:
    peso = (61.1 * altura) - 44.7;
    break;
  default:
    printf("opção invalida");
    break;
  }

  printf("Seu peso ideal é: %f", peso);

  return 0;
}
