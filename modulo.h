#ifndef __MODULO_H__
#define __MODULO_H__

typedef struct Modulos {
  int valor;
  int clase;
} Modulo;

int set_valor(Modulo *, int);
int get_valor(Modulo *);
int get_clase(Modulo *);
int crear_modulo(Modulo*, int, int);
int sumar(Modulo *, Modulo *, Modulo *);
int multiplicar(Modulo *, Modulo *, Modulo *);
int calcular_inverso_multiplicativo(Modulo *, Modulo *);
int calcular_inverso_aditivo(Modulo *, Modulo *);

#endif
