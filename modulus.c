#include <stdio.h>
#include "modulus.h"

int add(Modulus *number1, Modulus *number2, Modulus *result){
  int auxiliar = 0;
  int current_class = get_class(result);

  auxiliar = get_value(number1) + get_value(number2);
  auxiliar = simplify_value(auxiliar, current_class);
  set_value(result, auxiliar);

  return 1;
}

int multiply(Modulus *number1, Modulus *number2, Modulus *result) {
  int auxiliar = 0;
  int current_class = get_class(result);

  auxiliar = get_value(number1) * get_value(number2);
  auxiliar = simplify_value(auxiliar, current_class);
  set_value(result, auxiliar);

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

int set_value(Modulus *number, int nuevo_value) {
  number->value = nuevo_value;
  return 0;
}
