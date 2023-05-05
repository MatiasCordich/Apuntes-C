#include <stdio.h>

int main(int argc, char const *argv[])
{

    // HACER UN ALGORITMO QUE IMPRIMA EL MAYOR Y EL MENOR DE UNA SERIE DE 5 NÚMEROS QUE VAMOS INTRODUCIENDO POR TECLADO.

    int i;
    int num;
    int num_mayor;
    int num_menor;

    // Ingerso un For que se repetrira 5 veces

    for (i = 0; i < 5; i++)
    {

        // Ingresamos un valor para la variable num
        printf("Ingrese un numero: ");
        scanf("%i", &num);

        // Evaluo maximo y minimos
        if (i == 0)
        {
            // La primera iteracion seran tanto maximos y minimos porque no hay con que comparar
            num_mayor = num;
            num_menor = num;
        }
        else
        {
            if (num > num_mayor)
            {
                num_mayor = num;
            }

            if (num < num_menor)
            {
                num_menor = num;
            }
        }
    }

    // Imprimo por pantalla los valores obtenidos.
    printf("El numero mayor ingresado es %i\n", num_mayor);
    printf("El numero menor ingresado es %i\n", num_menor);

    return 0;
}
