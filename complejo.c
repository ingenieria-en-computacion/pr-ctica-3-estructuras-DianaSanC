#include "complejo.h"
#include <stdio.h>
#include <stdbool.h>

//asigna un valor real a parte real
COMPLEJOS asigna_real(REAL r) { 
    COMPLEJOS c;
    c.real = r;
    c.imaginario = 0;
    return c;
}
//asigna un valor imaginario a parte imaginaria
COMPLEJOS asigna_imaginario(IMAGIN i) { 
    COMPLEJOS c; 
    c.real = 0; 
    c.imaginario = i;
    return c;
}
//devuelve la parte real de un complejo
REAL parte_real(COMPLEJOS c) {  
    return c.real;
}
//devuelve la parte imaginaria de un complejo
IMAGIN parte_imaginario(COMPLEJOS c) {  
    return c.imaginario;
}
//devuelve el valor del modulo de un complejo
REAL modulo_complejo(COMPLEJOS c) { 
    REAL real_sq = c.real * c.real;
    REAL imag_sq = c.imaginario * c.imaginario;
    REAL mod = 0;
    for (REAL i = 0; i * i <= real_sq + imag_sq; i++) {
        mod = i;
    }
    return mod;
}
//devuelve la sumatoria de dos complejos
COMPLEJOS suma(COMPLEJOS a, COMPLEJOS b) {  
    COMPLEJOS resultado;
    resultado.real = a.real + b.real;
    resultado.imaginario = a.imaginario + b.imaginario;
    return resultado;
}
