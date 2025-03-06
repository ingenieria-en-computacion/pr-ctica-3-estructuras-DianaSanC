#include <stdio.h>
#include "conjunto.h"


int main(){
    CONJUNTO c, d, e;
    c = conjunto_vacio();
    d = conjunto_vacio();
    e = conjunto_vacio();
    print_conjunto(c);
    print_conjunto(d);
    print_conjunto(e);


    printf("el conjunto c esta vacio %d\n", es_vacio(c));
    c = agregar(c, 2);
    c = agregar(c, 3);
    c = agregar(c, 19);
    c = agregar(c, 11);
    c = agregar(c, 15);
    print_conjunto(c);

    d = agregar(c, 2);
    d = agregar(c, 4);
    d = agregar(c, 25);
    d = agregar(c, 2);
    print_conjunto(d);

    e= _union(c,d);
    print_conjunto(e);
    quitar(c,2);
    print_conjunto(c);

    return 0;
}
