#ifndef __MODULUS_H__
#define __MODULUS_H__

typedef struct Moduli {
  int value;
  int class;
} Modulus;

int set_valor(Modulus *, int);
int simplify_value(int, int);
int get_value(Modulus *);
int get_class(Modulus *);
int create_modulus(Modulus*, int, int);
int add(Modulus *, Modulus *, Modulus *);
int multiply(Modulus *, Modulus *, Modulus *);
int find_additive_inverse(Modulus *, Modulus *);
int find_multiplicative_inverse(Modulus *, Modulus *);

#endif
