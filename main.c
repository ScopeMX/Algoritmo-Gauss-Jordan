#include <stdio.h>
#include <stdlib.h>
#include "modulus.h"

Modulus A;
Modulus B;
Modulus C;


int main(void) {
  A.class = 6;
  B.class = 6;
  C.class = 6;

  A.value = 5;
  B.value = 3;
  C.value = 0;



  printf("A: value %d, class %d \n", get_value(&A), get_class(&A));
  printf("B: value %d, class %d \n", get_value(&B), get_class(&B));
  printf("C: value %d, class %d \n", get_value(&C), get_class(&C));

  add(&A, &B, &C);
  printf("After addition C: value %d, class %d \n", get_value(&C), get_class(&C));
  multiply(&A, &B, &C);
  printf("After multiplication C: value %d, class %d \n", get_value(&C), get_class(&C));


  return 0;
}
