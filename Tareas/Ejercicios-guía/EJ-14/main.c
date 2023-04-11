#include <stdio.h>

int main(int argc, char const *argv[])
{

    // HACER UN ALGORITMO QUE ME IMPRIMA LOS NUMEROS DEL 1 AL 100

    // Declaro mis variable contador y la inicializo en 1
    int contador = 1;

    // Hago un bucle while que se repita hasta que el valor de la variable contador deje de ser menor o igual a 100
    while (contador <= 100)
    {

        // Imprimo por pantalla el valor de contador
        printf("%i\n", contador);

        // Incrementa la variable contador en 1 y repito el ciclo hasta que no se cumpla mas la condicion del while
        contador = contador + 1;
    }

    printf("Fin del programa");

    return 0;
}
