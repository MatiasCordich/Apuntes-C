#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
        IMPRIMIR Y CONTAR MULTIPLOS DE 2 0 3 ENTRE 1 Y 100
    */

    int i;
    int contador_multiplos_dos = 0;
    int contador_multiplos_tres = 0;

    for (i = 1; i < 100; i++)
    {

        if (i % 2 == 0)
        {
            printf("%i\n", i);
            contador_multiplos_dos = contador_multiplos_dos + 1;
        }

        if (i % 3 == 0)
        {
            printf("%i\n", i);
            contador_multiplos_tres = contador_multiplos_tres + 1;
        }
    }

    printf("---------- RESULTADOS ----------\n");
    printf("CANTIDAD DE NUMEROS MULTIPLOS DE 2: %i\n", contador_multiplos_dos);
    printf("CANTIDAD DE NUMEROS MULTIPLOS DE 3: %i\n", contador_multiplos_tres);

    return 0;
}
