#include <stdio.h>

int P2(void) {
  int num1, num2, num3, maior;

  printf("Digite o numero 1: \n");
  scanf("%d", &num1);
  printf("Digite o numero 2: \n");
  scanf("%d", &num2);
  printf("Digite o numero 3: \n");
  scanf("%d", &num3);

  if ( num1 > num2 && num1 > num3){
    maior = num1;
  } else if (num2 > num1 && num2 > num3){
    maior = num2;
  } else if (num3 > num1 && num3 > num2){
    maior = num3;
  }

  printf("O maior é: %d", maior);
  

  return 0;
}
