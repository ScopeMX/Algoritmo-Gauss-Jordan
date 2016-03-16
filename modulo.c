#include <stdio.h>
#include "modulo.h"

int sumar(Modulo *numero1, Modulo *numero2, Modulo *resultado){
  int auxiliar = 0;
  int clase_actual = get_clase(resultado);
  auxiliar = get_valor(numero1) + get_valor(numero2);

  if (auxiliar >= clase_actual) {
    auxiliar = auxiliar % clase_actual;
  }
  if (auxiliar < 0) {
    auxiliar = auxiliar + clase_actual;
  }
  set_valor(resultado, auxiliar);
  return 1;
}

int get_valor(Modulo *numero) {
  return numero->valor;
}

int get_clase(Modulo *numero) {
  return numero->clase;
}

int set_valor(Modulo *numero, int nuevo_valor) {
  numero->valor = nuevo_valor;
  return 0;
}
