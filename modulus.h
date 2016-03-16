#ifndef __MODULUS_H__
#define __MODULUS_H__

typedef struct Moduli {
  int value;
  int class;
} Modulus;

int set_valor(Modulus *, int); //Done
int simplify_value(int, int); //Done
int get_value(Modulus *); //Done
int get_class(Modulus *); //Done
int create_modulus(Modulus*, int, int);
int add(Modulus *, Modulus *, Modulus *); //Done
int multiply(Modulus *, Modulus *, Modulus *); //Done
int find_additive_inverse(Modulus *, Modulus *);
int find_multiplicative_inverse(Modulus *, Modulus *);

#endif
