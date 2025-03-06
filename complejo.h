#ifndef __COMPLEJOS_H_
#define __COMPLEJOS_H_
#define TAM 1000

typedef int REAL;
typedef int IMAGIN;

typedef struct {
    REAL real;
    IMAGIN imaginario;
} COMPLEJOS;

COMPLEJOS asigna_real(REAL r);
COMPLEJOS asigna_imaginario(IMAGIN j);
REAL parte_real(COMPLEJOS c);
IMAGIN parte_imaginario(COMPLEJOS c);
REAL modulo_complejo(COMPLEJOS c);
COMPLEJOS suma(COMPLEJOS a, COMPLEJOS b);

#endif