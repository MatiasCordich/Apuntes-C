#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ESCRIBIR EN PSEUDOCODIGO Y CODIFICAR EN C UN PROGRAMA QUE MUESTRE LOS MÚLTIPLOS DE 2 Y DE 3 Y DE AMBOS COMPRENDIDOS ENTRE 0 Y 100
    // Declaro mi varialbe

    int i;

    // Hago un for del 0 al 100
    for (i = 0; i <= 100; i++)
    {   
        // Si el numero es multiplo de 2 y de 3 escribo ese numero
        if (i % 2 == 0 && i % 3 == 0)
        {
            printf("%i\n", i);
        }
        else if (i % 3 == 0)  // Si el numero es multiplo de 3 escribo ese numero
        {
            printf("%i\n", i);
        }
        else if (i % 2 == 0)  // Si el numero es multiplo de 2 escribo ese numero
        {
            printf("%i\n", i);
        }
    }

    return 0;
}
