#include <stdio.h>

int Ex005(void) {

  int l1, l2, l3;

  printf("Digite um lado\n");
  scanf("%d", &l1);
  printf("Digite um lado\n");
  scanf("%d", &l2);
  printf("Digite um lado\n");
  scanf("%d", &l3);

  if ((l1 + l2) > l3 && (l1 + l3) > l2 && (l2 + l3) > l1) {
    if (l1 == l2 == l3) {
      printf("Equilatero");
    } else if (l1 == l2 || l1 == l3 || l2 == l3) {
      printf("isóceles");
    } else if (l1 != l2 && l1 != l3 && l2 != l3)
      printf("Escaleno");
  } else {
    printf("Não é um Triangulo");
  }

  return 0;
}