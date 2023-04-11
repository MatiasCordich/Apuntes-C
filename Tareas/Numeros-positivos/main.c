#include <stdio.h>

int main(int argc, char const *argv[])
{
    // REALIZAR UN PROGRAMA QUE PIDA NUMEROS Y FINALICE AL INGRESAR 5 NUMEROS POSITIVOS

    // Determino las variables
    float numero;
    int contador_numeros_positivos;

    // Ingreso los valores de base y altura por teclado

    while (contador_numeros_positivos < 5)
    {
        printf("Ingrese un numero: ");
        scanf("%f", &numero);

        if (numero > 0)
        {
            contador_numeros_positivos = contador_numeros_positivos + 1;
        }
        
    }

    printf("Ya ha ingresado %i numeros positivos\n", contador_numeros_positivos);
    printf("Fin del programa");

    return 0;
}