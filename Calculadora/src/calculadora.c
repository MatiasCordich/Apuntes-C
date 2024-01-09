#include "calculadora.h"
#include "operaciones.h"
#include "entrada_salida.h"

float realizarOperacion(float num_1, float num_2, char operador, int *resultadoGuardado, float *ultimoResultado)
{

    float resultado = 0;

    switch (operador)
    {
    case '+':
        resultado = sumar(num_1, num_2);
        break;
    case '-':
        resultado = restar(num_1, num_2);
        break;
    case '*':
        resultado = multiplicar(num_1, num_2);
        break;
    case '/':
        resultado = dividir(num_1, num_2);
        break;

    default:
        printf("ERROR: OPERADOR NO VALIDO.\n");
        break;
    }

    return resultado;
}