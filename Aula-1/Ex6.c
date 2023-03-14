#include <stdio.h>

int Ex6(void) {
  int n1, n2, n3, n4, media;

  printf("Digite a nota 1\n");
  scanf("%d", &n1);
  printf("Digite a nota 2\n");
  scanf("%d", &n2);
  printf("Digite a nota 3\n");
  scanf("%d", &n3);
  printf("Digite a nota 4\n");
  scanf("%d", &n4);

  media = (n1 + n2 + n3 + n4) / 4;

  printf("A Média é: %d\n", media);

  return 0;
}