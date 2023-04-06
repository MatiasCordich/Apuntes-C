#include <stdio.h>

int main(int argc, char const *argv[])
{
    // HACER UN ALGORITMO QUE NOS PERMITA INTRODUCIR UN NUMERO POR TECLADO Y NOS INFORME SI ES POSITIVO O NEGATIVO

    int numero;

    // Ingreso un valor numerico por pantalla y lo guardo en la variable numero
    printf("Ingresa un numero: ");
    scanf("%i", &numero);

    // Si el numero ingresado es mayor que cero
    if (numero > 0){

        // Imprimo que es positivo
        printf("Es positivo");
    }
    else{

        // Caso contario impirmo que es negativo
       printf("Es negativo");
    }
    return 0;
}
