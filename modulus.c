#include <stdio.h>
#include "modulus.h"

int add(Modulus *number1, Modulus *number2, Modulus *result){
  int auxiliar = 0;
  int current_class = get_class(result);

  auxiliar = get_value(number1) + get_value(number2);
  set_value(result, auxiliar);

  return 1;
}

int multiply(Modulus *number1, Modulus *number2, Modulus *result) {
  int auxiliar = 0;
  int current_class = get_class(result);

  auxiliar = get_value(number1) * get_value(number2);
  set_value(result, auxiliar);

  return 1;
}

int find_additive_inverse(Modulus *number, Modulus *result) {
  int auxiliar = 0;
  int current_class = get_class(result);

  auxiliar = current_class - get_value(number);
  set_value(result, auxiliar);

  return 1;
}

int find_multiplicative_inverse(Modulus *number, Modulus *result) {
  int current_class = get_class(result);
  int inverse = current_class - 2;
  int auxiliar = get_value(number);
  int i;
  int pre_result = auxiliar;

  if(auxiliar == 0) {
    printf("-No hay-");
    return 0;
  }
  if (inverse == 0) {
    pre_result = 1;
  } else if(inverse == 1){
    pre_result = auxiliar;
  } else {
    for (i = 0; i < inverse-1; i++) {
      pre_result = pre_result * auxiliar;
      pre_result = simplify_value(pre_result, current_class);
    }
  }
  set_value(result, pre_result);
  return 1;
}

int simplify_value(int value, int class) {
  if (value >= class) {
    value = value % class;
  }
  if (value < 0) {
    value = value + class;
  }
  return value;
}

int get_value(Modulus *number) {
  return number->value;
}

int get_class(Modulus *number) {
  return number->class;
}

int set_value(Modulus *number, int new_value) {
  number->value = simplify_value(new_value, number->class);
  return 0;
}
