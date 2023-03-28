#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    // HACER UNA CALCULADORA QUE MUESTRE LAS SIGUIENTES OPERACIONES: SUMA, RESTA, MULTIPLICACION, DIVISON, RESTO

    int num_a;
    int num_b;

    printf("Ingrese un primer numero: ");
    scanf("%i", &num_a);
    printf("Ingrese un segundo numero: ");
    scanf("%i", &num_b);

    int suma = num_a + num_b;
    int resta = num_a - num_b;
    int multiplicacion = num_a * num_b;
    int division = num_a / num_b;
    int resto = num_a % num_b;

    printf("La suma de %i + %i es %i\n", num_a, num_b, suma);
    printf("La resta de %i - %i es %i\n", num_a, num_b, resta);
    printf("La multiplicacion de %i * %i es %i\n", num_a, num_b, multiplicacion);
    printf("La divison de %i / %i es %i\n", num_a, num_b, division);
    printf("El resto entre %i y %i es %i\n", num_a, num_b, resto);

    return 0;
}
