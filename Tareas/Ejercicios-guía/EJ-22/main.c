#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DISEÑAR UN ALGORITMO QUE IMPRIMA Y SUME LA SERIE DE NUMEROS 3,6,9,12...99

    // Declaro mi variable contador y la inicializo en 3
    int contador = 3;

    // Hago un bucle while que se repita hasta que el valor de la variable contador sea mayor A 100
    while (contador < 100)
    {

        // Imprimo por pantalla el valor de contador
        printf("%i\n", contador);

        // La serie va de 3 en 3 por lo que a cada iteracion del bucle, el valor de contador le tengo que sumar de a 3
        contador = contador + 3;
    }

    printf("Fin del programa");
    return 0;
}
