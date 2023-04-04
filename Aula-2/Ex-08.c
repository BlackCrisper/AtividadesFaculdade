#include <stdio.h>

int Ex08(void) {

  float vt, vd; // vd = valor dividido, vt = Valor total

  printf("Digite o valor da conta: \n");
  scanf("%f", &vt);

  vd = vt / 3;

  printf("O valor pra cada será: \nCarlos %f \nAndré %f \nFelipe %f", vd, vd,
         vd);
  return 0;
}