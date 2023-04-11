#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ESCRIBIR EN PSEUDOCODIGO Y CODIFICAR EN C UN PROGRAMA QUE ME MUESTRE LOS NUMEROS IMPARES ENTRE 0 Y 100 Y QUE IMPRIMA CUANTOS IMPARES HAY

    // Declaro mis variables que van a ser contadoras
    int contador = 0;
    int contador_impares = 0;

    // Hago un bucle while que se repita hasta que el valor de la variable contador deje de ser menor a 100
    while (contador < 100)
    {
        // Si el modulo del valor de contador es distinto a cero entonces es valor es IMPAR
        if(contador%2 != 0) {

            // Contabilizame en 1 la cantidad de impares
            contador_impares = contador_impares + 1;

            // Imprime por pantalla el valor impar de contador
            printf("%i\n", contador);
        }

        // Incrementa la variable contador en 1 y repito el ciclo hasta que no se cumpla mas la condicion del while
        contador = contador + 1;
    }
    
    // Imprimo por pantalla la cantidad de numeros impares que hay del 0 al 100 mediante el valor de la variable contador_impares
    printf("Del 0 al 100 hay %i numeros impares\n", contador_impares);
    printf("Fin del programa");
    return 0;
}
