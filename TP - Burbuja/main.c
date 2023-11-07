#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Tenemos nuestro vector de numeros 
    int vect[5] = {2,3,5,1,4};

    // Vamos declar una variable auxiliar

    int aux;

    // Vamos a recorrer el vector con un bucle for
    for (int i = 0; i < 5; i++)
    {
        // Vamos a anidar otro for
        for (int j = 0; j < 5; i++)
        {
            // Vamos a realizar la condicion que determina si se realiza un cambio de posicion en el vector

            if (vect[j] > vect[j+1])
            {
                // Si el elemento de la posicion actual del vector (vect[j]) es mayor al elemento de la posicion siguiente del vector (verct[j+1]) entonces hacemos lo siguiente

                // La variable auxiliar va a tomar el valor del elemento del vector que se encuentra en la posicion j+1
                aux = vect[j+1];

                // El vector con la posicion j+1 recibira como valor el elemento del vector que se encuentre en la posicion original
                vect[j+1] = vect[j];

                // El vector con la posicion inicial recibira como valor el que guarda la variable auxiliar
                vect[j] = aux;
            }
            
        }
        
    }

    // Vamos a crear dos ciclos for para mostra por pantalla el vector sin ordenamiento y con ordenamiento de burbuja

    printf("Arreglo sin ordenar:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vect[i]);
    }
    

    printf("\nArreglo ordenado:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vect[i]);
    }
    
    


    return 0;
}
