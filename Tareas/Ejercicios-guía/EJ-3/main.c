#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DE 10 NUMEROS INGRESADOS, INDICAR CUANTOS SON MAYORES A CERO Y CUANTOS SON MENORES A CERO

    // Declaro mis variables

    int contador = 0;
    int contador_mayores = 0;
    int contador_menores = 0;
    float numero;

    // Hago el bucle while donde pido que se ejecute el codigo hasta que la variable contador sea menor a 10
    while (contador < 10)
    {
        // Pido por pantalla ingresar un numero y guardo el valor en la variable numero
       printf("Ingrese un numero: ");
       scanf("%f", &numero);

        // Evaluo si el valor de la variable numero es mayor o menor que cero 0
       if (numero > 0)
       {
        // Si es mayor entonces incrementa el contador de mayores a cero en 1
        contador_mayores = contador_mayores + 1;
       }
       else
       {
        // o si es menor entonces incrementa el contador de menores a cero en 1
        contador_menores = contador_menores + 1;
       }

        // Una vez salido de la evualacion incremento el valor de contador para volver a hacer el bucle hasta que se deje de cumplir la condicion del while
       contador = contador + 1;
            
    }

    // Imprimo por pantalla la cantidad de numeros que fueron mayores y menores a cero
    printf("La cantidad de numeros mayores a 0 ingresados son %i\n", contador_mayores);
    printf("La cantidad de numeros menores a 0 ingresados son %i\n", contador_menores);
    return 0;
}
