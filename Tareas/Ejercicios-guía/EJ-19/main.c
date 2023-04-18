#include <stdio.h>

int main(int argc, char const *argv[])
{
    // HACER EL ALGORITMO QUE IMPRIMA TODOS LOS NÚMEROS NATURALES QUE HAY DESDE LA UNIDAD HASTA UN NÚMERO QUE INTRODUCIMOS POR TECLADO. 

    // Declaro mi variable contador y la inicializo en 3
    int i;
    int numero;

    // Ingreso el valor de numero por teclado
    printf("Ingrese un numero: ");
    scanf(" %i", &numero);

    // Hago el bucle for
    for (i = 1; i <= numero; i++)
    {
        printf("%i\n", i);
    }
    
    
    return 0;
}
