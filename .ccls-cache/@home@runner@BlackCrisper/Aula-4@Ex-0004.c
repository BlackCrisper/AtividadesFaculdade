#include <stdio.h>

int Ex0004(void) {

  float preco, novopreco;

  printf("Digite o Preço: \n");
  scanf("%f", &preco);

  if (preco <= 50) {
    novopreco = preco * 0.05;
  } else if (preco >= 50 && preco <= 100) {
    novopreco = preco * 0.1;
  } else {
    novopreco = preco * 0.15;
  }

  if (novopreco <= 80){
    printf("Barato");
  } else if ( novopreco >= 80 && novopreco <=120 ) {
    printf("Normal");
  } else if ( novopreco >= 80 && novopreco <=120 )

  return 0;
}
