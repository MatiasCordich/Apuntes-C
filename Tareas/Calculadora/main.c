#include <stdio.h>

int main(int argc, char const *argv[])
{

    // HACER UNA CALCULADORA QUE MUESTRE LAS SIGUIENTES OPERACIONES: SUMA, RESTA, MULTIPLICACION, DIVISON, RESTO

    // Determino las variables
    int num_a;
    int num_b;
    int suma;
    int resta;
    int multiplicacion;
    int division;
    int resto;
    char operacion;

    // Ingreso las valores de la variables por teclado
    printf("Ingrese un primer numero: ");
    scanf("%i", &num_a);
    printf("Ingrese un segundo numero: ");
    scanf("%i", &num_b);
    printf("Ingrese la operacion que desea realizar (s,r,m,d,M): ");
    scanf(" %c", &operacion);

    // Dependiendo de la operacion que elegimos, realizamos la oparecion correspondiente y mostramos su resultado por pantalla
    if (operacion == 's')
    {
        suma = num_a + num_b;
        printf("La suma de %i + %i es %i\n", num_a, num_b, suma);
    }
    else if (operacion == 'r')
    {
        resta = num_a - num_b;
        printf("La resta de %i - %i es %i\n", num_a, num_b, resta);
    }
    else if (operacion == 'm')
    {
        multiplicacion = num_a * num_b;
        printf("La multiplicacion de %i * %i es %i\n", num_a, num_b, multiplicacion);
    }
    else if (operacion == 'd')
    {
        division = num_a / num_b;
        printf("La divison de %i / %i es %i\n", num_a, num_b, division);
    }
    else
    {
        resto = num_a % num_b;
        printf("El resto entre %i y %i es %i\n", num_a, num_b, resto);
    }

    return 0;
}
