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

    // Ingreso las valores de la variables por teclado
    printf("Ingrese un primer numero: ");
    scanf("%i", &num_a);
    printf("Ingrese un segundo numero: ");
    scanf("%i", &num_b);

    // Le asigno a cada variable su operador aritmetico con los valores de las variables num_a y num_b
    suma = num_a + num_b;
    resta = num_a - num_b;
    multiplicacion = num_a * num_b;
    division = num_a / num_b;
    resto = num_a % num_b;

    // Escribo por pantalla los resultados
    printf("La suma de %i + %i es %i\n", num_a, num_b, suma);
    printf("La resta de %i - %i es %i\n", num_a, num_b, resta);
    printf("La multiplicacion de %i * %i es %i\n", num_a, num_b, multiplicacion);
    printf("La divison de %i / %i es %i\n", num_a, num_b, division);
    printf("El resto entre %i y %i es %i\n", num_a, num_b, resto);

    return 0;
}
