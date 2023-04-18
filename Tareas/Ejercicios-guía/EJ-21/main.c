#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ESCRIBIR EN PSEUDOCODIGO Y CODIFICAR EN C UN PROGRAMA QUE MUESTRE LOS NÚMEROS PRIMOS COMPRENDIDOS ENTRE 0 Y 100.

    int contador;
    int i;
    int primo = 0;

    // Bucle FOR que vaya desde el 0 al 100
    for (i = 0; i <= 100; i++)
    {   
        // la variable primo es 1 y contador es 2
        primo = 1;
        contador = 2;

        // Mientras se cumplan ambas condiciones
        while (contador <= i / 2 && primo)
        {
            // Y el modulo dice que el valor de i es par
            if (i % contador == 0)
                // primo es 0 por lo que es false
                primo = 0;

            contador++;
        }

        // Primo es 1 true, entonces el valor de i es primo
        if (primo)
            printf("%\n ", i);
    }

    return 0;
}
