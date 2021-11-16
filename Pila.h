

#ifndef PILA_H
#define PILA_H

#ifdef __cplusplus
extern "C" {
#endif

    /*Para crear una pila necesitamos:
     1- La estrucura de los datos que contendra la app.
     2- Estructura Nodo con referencia a la estrucutura los datos.
     3- Estructura pila que tenga referencia con Nodo que cuente la cantidad de datos
     4- Metodos para crear Estrucutras: de datos, nodo y pila.
     5- Metodos que permitan jugar con los datos de la pila.
     */

    //Declaraciones
    //1- Estructura base.

    typedef struct Persona {
        int Dui;
        char Apellidos[50];
        char Nombres[50];
        int Edad;
        char Carrera[30];
    } Personas;

    //2- Estructura Nodo

    typedef struct nodo {
        Personas *dato;
        struct nodo *Siguente;
    } Nodo;

    //3- Estructura pila

    typedef struct pila {
        int Contador;
        Nodo *cabeza;
    } Pila;

    //4- Creando metodos de estrucutras
    //4.1- Creando Nueva persona
    Personas *CreandoPersona(int Dui, char Apellido[50], char Nombre[50], int Edad, char Carrera[50]);

    //4.2- Creando Nodo
    Nodo* CreandoNodo(Personas* persona);

    //4.3- Creando Pila
    Pila* CreandoPila(Personas *persona, Nodo *nodo);
    
    //5- Creando metodos para jugar con los datos.
    //5.1- Validar si la pila esta vacia.
    int EstaVacia(Pila *pila);
    
    // 5.2- Agregar Nueva Persona
    void AgregarNuevaPersona(Pila *pila, Nodo *nodo);
    
    // 5.3- Imprimir pila-
    void Imprimir(Pila *pila);
#ifdef __cplusplus
}
#endif

#endif /* PILA_H */

