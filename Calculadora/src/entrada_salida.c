#include "entrada_salida.h"
#include <stdio.h>

// Implementamos las funciones de entrada_salida
void mostarResultado(float resultado)
{
    printf("RESULTADO %.2f\n", resultado);
};

void mostrarErrorDivCero()
{
    printf("ERROR: NO SE PUEDE DIVIDIR POR CERO\n");
};

int obtenerOpcion()
{
    int opcion;
    printf("Elija una opcion: ");
    scanf("%d", &opcion);
    return opcion;
};

void mostarMenu()
{
    printf("----------- CALCULADORA -----------\n");
    printf("1 Realizar operación\n");
    printf("2 Mostrar último resultado\n");
    printf("3 Salir\n");
};

void mostrarOpciones()
{
    printf("----------- OPERACIONES -----------\n");
    printf("( + ) SUMA\n");
    printf("( - ) RESTA\n");
    printf("( * ) MULTIPLICACION\n");
    printf("( / ) DIVISION\n");
    printf("Ingrese una operacion: ");
};