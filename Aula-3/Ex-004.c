#include <stdio.h>

int Ex004(void) {
  int num1, num2;


  
  printf("Digite o numero\n");
  scanf("%d" ,&num1);
  printf("Digite o numero\n");
  scanf("%d" , &num2);

  if (num1 < num2){
    printf("%d", num1);
    printf("%d", num2);
  } else if (num2 < num1) {
    printf("%d", num2);
    printf("%d", num1);
  }
  
  return 0;
}