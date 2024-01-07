#include "operaciones.h"

// Implementamos las funciones aritmeticas

float sumar(float num_1, float num_2){
    return num_1 + num_2;
};

float restar(float num_1, float num_2){
    return num_1 - num_2;
};

float multiplicar(float num_1, float num_2){
    return num_1 * num_2;
};

float dividir(float num_1, float num_2){
    if (num_2 != 0)
    {
        return num_1 / num_2;
    } else
    {
        printf("ERROR: NO SE PUEDE DIVIDIR POR CERO");
        return 0;
    }
    
    
};