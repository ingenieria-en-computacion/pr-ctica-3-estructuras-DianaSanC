#include <stdio.h>
#include "Complejos.h"

int main(){
    
    //asigna valores de complejos
    COMPLEJOS c, d, e, f; 
    COMPLEJOS c = asigna_real(4);
    COMPLEJOS d = asigna_imaginario(2);
    printf("Nuevo complejo: (%d %d)\n");
    
    //parte real, parte imaginaria
    int REAL = parte_real(c);
    int IMAGINARIO = parte_imaginario(c);

    //suma complejos
    COMPLEJOS e, f, resultado;
    printf("Escribe la parte real e imaginaria del primer complejo:\n");
    scanf("%f %f", &e.real, &e.imaginario);
    printf("Escribe la parte real e imaginaria del segundo complejo:\n");
    scanf("%f %f", &f.real, &f.imaginario);

    resultado = suma(e, f);
    printf("El resultado es: %.2f + %.2fi\n", resultado.real, resultado.imaginario);

    //modulo complejos
    COMPLEJOS c;
    int modulo;

    printf("Escribe la parte real e imaginaria del complejo:\n");
    scanf("%f %f", &e.real, &e.imaginario);
    modulo = modulo_complejo(e);
    printf("El módulo del complejo es: %.2f\n", modulo);

    return 0;
}