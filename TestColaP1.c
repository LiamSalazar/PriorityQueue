#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include ".\Elem\DatoPrioridad.h"
#include ".\ColaP\ColaP.h"

void ImpColaP(ColaP q);

int main() {
    int i;
    ColaP q = nuevaP();

    srand(time(NULL));
    for (i = 1; i <= 10; i++)
        q = formarP(q, crearDato(i, 1 + rand() % 30));

    ImpColaP(q);
    q = desformarP(q);
    puts("\n-----------------");
    ImpColaP(q);
    puts("\n-----------------");

    return 0;
}

void ImpColaP(ColaP q) { ImpLista(q); }
