#include <stdio.h>
#include <stdlib.h>
#include "modulus.h"

Modulus A;
Modulus B;
Modulus C;


int main(void) {
  A.class = 7;
  B.class = 7;
  C.class = 7;

  A.value = 4;
  B.value = 6;
  C.value = 0;



  printf("A: value %d, class %d \n", get_value(&A), get_class(&A));
  printf("B: value %d, class %d \n", get_value(&B), get_class(&B));
  printf("C: value %d, class %d \n", get_value(&C), get_class(&C));

  add(&A, &B, &C);
  printf("After addition C: value %d, class %d \n", get_value(&C), get_class(&C));
  multiply(&A, &B, &C);
  printf("After multiplication C: value %d, class %d \n", get_value(&C), get_class(&C));

  find_additive_inverse(&A, &C);
  printf("After find additive inverse of A: value %d, class %d \n", get_value(&C), get_class(&C));
  find_additive_inverse(&B, &C);
  printf("After find additive inverse of B: value %d, class %d \n", get_value(&C), get_class(&C));

  find_multiplicative_inverse(&A, &C);
  printf("After find multiplicative inverse of A: value %d, class %d \n", get_value(&C), get_class(&C));
  find_multiplicative_inverse(&B, &C);
  printf("After find multiplicative inverse of B: value %d, class %d \n", get_value(&C), get_class(&C));


  return 0;
}
