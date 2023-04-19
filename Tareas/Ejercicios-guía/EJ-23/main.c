#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DISEÑAR EL ALGORITMO NECESARIO PARA HABIÉNDOSE LEÍDO EL VALOR DE 2 VARIABLES NUM1 Y NUM2 SE INTERCAMBIEN LOS VALORES DE LAS VARIABLES, ES DECIR QUE EL VALOR QUE TENÍA NUM1 AHORA LO CONTENGA NUM2 Y VICEVERSA.

    // Declaro mis variables
    int num1;
    int num2;
    int aux;
    
    // Ingreso los valores de num1 y num2
    printf("Ingrese un primer numero: ");
    scanf("%i", &num1);

    printf("Ingrese un segundo numero: ");
    scanf(" %i", &num2);

    // Escribo los valores de num1 y num2
    printf("la variable num1 es %i\n", num1);
    printf("la variable num2 es %i\n", num2);

    // Intercambio los valores de las variables num1 y num2
    // El valor de num1 pasa a la variable aux
    aux = num1;
    // El valor de num1 va a ser el valor de num2
    num1 = num2;
    // El valor de num2 va a ser el valor de la variable aux que es el valor de num1
    num2 = aux;

    // Vuelvo a imprimir de ambas variables con los valores intercambiados
    printf("la variable num1 es %i\n", num1);
    printf("la variable num2 es %i\n", num2);


    return 0;
}
