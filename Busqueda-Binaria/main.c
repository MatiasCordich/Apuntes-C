/*
--------- BUSQUEDA BINARIA EN C ---------

Fecha de creacion: 30/12/2023 

La funcion binarySearch cuenta con los siguienters parametos:

    arr[]: Un arreglo de enteros que representa la lista ordenada.
    i: Índice izquierdo del subarreglo actual.
    d: Índice derecho del subarreglo actual.
    x: Valor a buscar en el arreglo.

*/

#include <stdio.h>

// Hago la funcion de busqueda que sea recursiva

int binarySearch(int arr[], int i, int d, int x)
{

    // Verifico si el indice izquierdo es menor o igual al indice derecho
    if (i <= d)
    {
        // Calculo el indice medio del vector
        int mid = i + (d - 1) / 2;

        // Verifico si el indice medio es igual a x
        if (arr[mid] == x)
        {
            // Si es igual devuelvo el indice medio como la posicion del elemento
            return mid;
        }
        else if (arr[mid] < x)
        {
            // Si x es mayor que el elemento del inidice medio, realizo la busqueda en la mitad derecha del vector
            return binarySearch(arr, mid + 1, d, x);
        }
        else
        {
            // Si x es menor que el elemento del inidice medio, realizo la busqueda en la mitad izquierda del vector
            return binarySearch(arr, mid + 1, i, x);
        }
    }

    // Si el indice izquierdo es mayor que el indice derecho, quiere decir que no se encontro el elemento, devuelve -1
    return -1;
}

int main()
{

    // Vector de ejemplo ordenado
    int arr[] = {2, 3, 4, 10, 40};

    // Tamaño del vector
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    // Elemento a buscar
    int searched_item;

    printf("Ingrese un valor a buscar: ");
    scanf("%d", &searched_item);

    // Llamo a la funcion de busqueda binaria
    int result = binarySearch(arr, 0, arr_size - 1, searched_item);

    // Imprimo el resutado
    if (result == -1)
        printf("El elemento no esta presente en el arreglo.\n");
    else
        printf("El elemento esta presente en la posicion %d.\n", result);

    return 0;
}
