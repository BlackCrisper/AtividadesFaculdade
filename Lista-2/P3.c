#include <stdio.h>

int P3(void) {
  float salario, novosalario, bonus;
  int tempo;

  printf("Digite seu salário: ");
  scanf("%f", &salario);

  printf("Digite seu tempo de trabalho em anos: ");
  scanf("%d", &tempo);

  if (tempo >= 5) {
    bonus = salario * 0.2;
  } else {
    bonus = salario * 0.1;
  }

  novosalario = salario + bonus;

  printf("Seu salário incial era de %.2f e seu bônus foi de %.2f e no final "
         "ficou %.2f",
         salario, bonus, novosalario);
  return 0;
}