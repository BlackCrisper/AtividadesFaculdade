#include <stdio.h>

int P7(void) {
  float peso, altura, imc;

  printf("Digite sua altura: ");
  scanf("%f", &altura);
  printf("Digite seu peso ");
  scanf("%f", &peso);

  imc = peso / (altura * altura);

  if (imc < 18.5) {
    printf("Abaixo do peso");
  } else if (imc >= 18.5 && imc < 25) {
    printf("Peso Normal");
  } else if (imc >= 25 && imc < 30) {
    printf("acima do peso");
  } else if (imc >= 30) {
    printf("Obeso");
  }

  return 0;
}
