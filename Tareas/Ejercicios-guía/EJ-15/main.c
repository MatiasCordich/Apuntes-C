#include <stdio.h>

int main(int argc, char const *argv[])
{
    // HACER UN ALGORITMO QUE ME IMPRIMA LOS NUMEROS DEL 100 AL 0 EN ORDEN DECRECIENTE

    // Declaro mis variable contador y la inicializo en 100
    int contador = 100;

    // Hago un bucle while que se repita hasta que el valor de la variable contador sea mayor o igual a 0
    while (contador >= 0)
    {

        // Imprimo por pantalla el valor de contador
        printf("%i\n", contador);

        // Como tengo que ir en orden DECRECIENTE, al contador no le sumo 1 sino que tengo que RESTARLE 1
        contador = contador - 1;
    }

    printf("Fin del programa");
    return 0;
}
