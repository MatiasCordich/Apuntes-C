#include <stdio.h>

int main()
{
    // Tenemos nuestro vector de numeros
    int vect[5] = {2, 3, 5, 1, 4};

    // Imprimimos por pantalla el vector sin ordenar
    printf("\nArreglo sin ordenar:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%i\n ", vect[i]);
    }

    // Vamos a declar unas variables que nos van a servir para realizar el ordanamiento de tipo burbuja
    int i, j, aux;

    // Vamos a recorrer el vector por medio de un for
    for (i = 0; i < 5; i++)
    {
        // Anidamos otro for dentro
        for (j = 0; j < 5; j++)
        {
            // Vamos a realizar la condicion que determina si se realiza un cambio de posicion en el vector

            // Si el elemento de la posicion actual del vector (vect[j]) es MAYOR al elemento de la posicion siguiente del vector (verct[j+1]) entonces hacemos lo siguiente
            if (vect[j] > vect[j + 1])
            {
                // La variable auxiliar va a tomar el valor del elemento del vector que se encuentra en la posicion j+1
                aux = vect[j + 1];

                // El vector con la posicion j+1 recibira como valor el elemento del vector que se encuentre en la posicion original
                vect[j + 1] = vect[j];

                // El vector con la posicion inicial recibira como valor el que guarda la variable auxiliar
                vect[j] = aux;
            }
        }
    }

    // Imprimimos por pantalla el vector ordenado
    printf("\nArreglo ordenado:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%i\n ", vect[i]);
    }

    return 0;
}
