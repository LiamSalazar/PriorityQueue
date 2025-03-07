#include "..\ListImplement\Lista.h"
#include "..\ListImplement\UsaLista.h"
#include "..\Elem\DatoPrioridad.h"

typedef Lista ColaP;

ColaP nuevaP() { return vacia(); }

int esnuevaP(ColaP q) { return esvacia(q); }

ColaP formarP(ColaP q, Elem e) {
    if (esnuevaP(q))
        return cons(e, q);
    else if (EsMayorPrioridad(e, cabeza(q)))
        return cons(e, q);
    else
        return cons(cabeza(q), formarP(resto(q), e));
}

Elem primeroP(ColaP q) { 
    if (!esvacia(q)) 
        return cabeza(q); 
    return NULL; // Manejo de error en caso de lista vacía
}

ColaP desformarP(ColaP q) { 
    if (!esvacia(q)) 
        return resto(q); 
    return q; // Evitar errores en caso de lista vacía
}
