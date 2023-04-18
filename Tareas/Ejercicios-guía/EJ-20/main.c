#include <stdio.h>

int main(int argc, char const *argv[])
{
    // HACER EL ALGORITMO QUE NOS PERMITA CONTAR LOS MÚLTIPLOS DE 3 DESDE LA UNIDAD HASTA UN NÚMERO QUE INTRODUCIMOS POR TECLADO.

    int i;
    int numero;

    // Ingreso el valor de numero por teclado
    printf("Ingrese un numero: ");
    scanf(" %i", &numero);

    // Bucle For
    for (i = 1; i <= numero; i++)
    {
        // Si el numero en la iteracion es multiplo de 3
        if (i % 3 == 0)
        {
            printf("%i\n", i);
        }
    }

    return 0;
}
