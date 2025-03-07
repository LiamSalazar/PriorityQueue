#pragma once
#include <stdlib.h>
#include <stdio.h>
#include "..\Elem\DatoPrioridad.h"

typedef struct Nodo {
    Elem dato;
    struct Nodo *sig;
} *Lista;

Lista vacia() { return NULL; }

Lista cons(Elem e, Lista l) {
    Lista t = (Lista)malloc(sizeof(struct Nodo));
    if (!t) {
        printf("Error de memoria\n");
        exit(1);
    }
    t->dato = e;
    t->sig = l;
    return t;
}

int esvacia(Lista l) { return l == NULL; }

Elem cabeza(Lista l) { 
    if (!esvacia(l)) 
        return l->dato; 
    return NULL; // Manejo de error en caso de lista vacía
}

Lista resto(Lista l) { 
    if (!esvacia(l)) 
        return l->sig; 
    return NULL;
}

void ImpLista(Lista l) {
    while (l) {
        ImpElem(l->dato);
        l = l->sig;
    }
}

