#include <stdio.h>

int P10(void) {

  int codigo;

  printf("Digite o codigo do produto: ");
  scanf("%d", &codigo);

  switch (codigo) {
  case 1:
    printf("Alimento não perecível");
    break;
  case 2:
    printf("Alimento perecível");
    break;
  case 3:
    printf("Alimento perecível");
    break;
  case 4:
    printf("Alimento perecível");
    break;
  case 5:
    printf("Vestuário");
    break;
  case 6:
    printf("Vestuário");
    break;
  case 7:
    printf("Limpeza");
    break;
  case 8:
    printf("Limpeza");
    break;
  case 9:
    printf("Limpeza");
    break;
  case 10:
    printf("Limpeza");
    break;
  case 11:
    printf("Limpeza");
    break;
  case 12:
    printf("Limpeza");
    break;
  default:
    printf("Opção inválida");
    break;
  }

  return 0;
}
