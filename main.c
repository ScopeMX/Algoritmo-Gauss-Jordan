#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

Modulo A;
Modulo B;
Modulo C;


int main(void) {
  A.clase = 6;
  B.clase = 6;
  C.clase = 6;

  A.valor = 5;
  B.valor = 3;
  C.valor = 0;



  printf("A: valor %d, clase %d \n", get_valor(&A), get_clase(&A));
  printf("B: valor %d, clase %d \n", get_valor(&B), get_clase(&B));
  printf("C: valor %d, clase %d \n", get_valor(&C), get_clase(&C));

  sumar(&A, &B, &C);
  printf("C: valor %d, clase %d \n", get_valor(&C), get_clase(&C));

  return 0;
}
