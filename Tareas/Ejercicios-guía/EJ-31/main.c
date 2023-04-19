#include <stdio.h>

int main(int argc, char const *argv[])
{
    // HACER UN ALGORITMO QUE LUEGO DE INGRESAR 2 NÚMEROS POR TECLADO, IMPRIMA LOS NÚMEROS NATURALES QUE HAY ENTRE AMBOS EMPEZANDO POR EL MÁS PEQUEÑO, CONTAR CUANTOS NÚMEROS HAY Y CUÁNTOS DE ELLOS SON PARES.

    // Declaro mis variables
    int i;
    int contador_numeros = -2;
    int contador_pares = 0;
    int num_1;
    int num_2;
    int fin;

    // Ingreso el valor de la variable num_1
    printf("Ingrese un numero: ");
    scanf("%i", &num_1);

    // Ingreso el valor de la variable num_2
    printf("Ingrese otro numero: ");
    scanf("%i", &num_2);

    // Determino que variable de num_1 y num_2 va a ser el inicio y cual va a ser el final
    if (num_1 < num_2)
    {
        i = num_1;
        fin = num_2;
    }
    else
    {
        i = num_2;
        fin = num_1;
    }

    // Realizo el bucle en base a los numeros ingresados
    for (i; i <= fin; i++)
    {
        // En cada iteracion evaluo el numero de la variable i si es par
        if (i % 2 == 0)
        {
            // Si es par que me contabilice en 1
            contador_pares = contador_pares + 1;
        }

        // La variable contador_numeros la inicialice en -2 porque no tomo en cuenta los extremos, sino los numeros que hay entre medio de los intervalos. 
        contador_numeros = contador_numeros + 1;

        // Imprimo el valor de i en cada iteracion
        printf("%i\n", i);
    }


    // Imprimo los resultados finales una vez terminado la iteracion
    printf("En el intervalo hay %i numeros\n", contador_numeros);
    printf("En el intervalo hay %i numeros pares\n", contador_pares);

    return 0;
}
