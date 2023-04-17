#include <stdio.h>

int P4(void) {
  float valoremprestimo, numparcelas, salario;

  printf("Digite seu salario: ");
  scanf("%f", &salario);
  printf("Digite o valor do emprestimo: ");
  scanf("%f", &valoremprestimo);
  printf("Digite o numero de parcelas: ");
  scanf("%f", &numparcelas);

  if ((valoremprestimo/numparcelas) >= salario * 0.3){
    printf("Emprestimo negado");
  } else {
    printf("Aprovado");
  }
  
  return 0;
}
