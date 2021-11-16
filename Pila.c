#include "Pila.h"
#include <stdio.h>
#include <stdlib.h>

//4.1- Crear Nueva Persona

Personas *CreandoPersona(int Dui, char Apellidos[50], char Nombres[50], int Edad, char Carrera[50]) {
    Personas *NuevaPersona = (Personas*) malloc(sizeof (Personas));
    NuevaPersona->Dui = Dui;
    strcpy(NuevaPersona->Apellidos, Apellidos);
    strcpy(NuevaPersona->Nombres, Nombres);
    NuevaPersona->Edad = Edad;
    strcpy(NuevaPersona->Carrera, Carrera);
    return NuevaPersona;
}

//4.2- Creando Nodo

Nodo* CreandoNodo(Personas* persona) {
    Nodo *NuevoNodo = (Nodo*) malloc(sizeof (Nodo));
    NuevoNodo->dato = persona;
    NuevoNodo->Siguente = NULL;
    return NuevoNodo;
}

//4.3- Creando Pila

Pila* CreandoPila() {
    Pila *NuevaPila = (Pila*) malloc(sizeof (Pila));
    NuevaPila->cabeza = NULL;
    NuevaPila->Contador = 0;
    return NuevaPila;
}

//5.1- Validar si la pila esta vacia.

int EstaVacia(Pila *pila) {
    if (pila->Contador == 0) {
        return 1;
    } else {
        return 0;
    }
}

// 5.2- Agregar Nueva Persona

void AgregarNuevaPersona(Pila *pila, Nodo *nodo) {
    if (EstaVacia(pila)) {
        pila->cabeza = nodo;
    } else {
        nodo->Siguente = pila->cabeza;
        pila->cabeza = nodo;
    }
    pila->Contador++;
}

// 5.3- Imprimir pila

void Imprimir(Pila *pila) {
    Nodo *auxiliar = pila->cabeza;
    Personas *aux;
    while(auxiliar != NULL){
        aux = auxiliar->dato;
        printf("%d, %s, %s, %d, %s\n", auxiliar->dato->Dui, auxiliar->dato->Apellidos, auxiliar->dato->Nombres, auxiliar->dato->Edad, auxiliar->dato->Carrera);
        auxiliar = auxiliar->Siguente;
    }
}