#include <stdio.h>

int P8(void) {

  float preconormal, precopagar, condicao;
  int opcao;

  printf("Digite o preço do produto: ");
  scanf("%f", &preconormal);
  printf("Digite o codigo da forma de pagamneto: ");
  scanf("%d", &opcao);

  switch (opcao) {
  case 1:
    condicao = preconormal * 0.15;
    precopagar = preconormal - condicao;
    
    break;
  case 2:
    condicao = preconormal * 0.1;
    precopagar = preconormal - condicao;
    break;
  case 3:
    condicao = preconormal;
    precopagar = condicao;
    break;
  case 4:
    condicao = preconormal * 0.1;
    precopagar = condicao + preconormal;
    break;
  default:
    printf("opção invalida");
    break;
  }

  printf("Valor a ser pago será: R$ %2.f", precopagar);

  return 0;
}
