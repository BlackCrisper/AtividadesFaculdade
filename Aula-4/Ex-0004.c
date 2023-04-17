#include <stdio.h>

int Ex0004(void) {

  float preco, novopreco;

  printf("Digite o Preço: \n");
  scanf("%f", &preco);

  if (preco <= 50) {
    novopreco = preco * 0.05;
  } else if (preco >= 50 && preco <= 100) {
    novopreco = preco * 0.10;
  } else {
    novopreco = preco * 0.15;
  }

  novopreco += preco;
  
  if (novopreco <= 80){
    printf("Barato \n");
  } else if ( novopreco >= 80 && novopreco <=120 ) {
    printf("Normal \n");
  } else if ( novopreco >= 120 && novopreco <=200 ) {
    printf("Caro \n");
  } else {
    printf("Muito Caro \n");
  }

  printf("%f \n",novopreco);
  return 0;
}
