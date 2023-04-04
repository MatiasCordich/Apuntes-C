#include <stdio.h>

int main(int argc, char const *argv[])
{
    // HACER UN ALGORITMO QUE NOS PERMITA INTRODUCIR UN NUMERO POR TECLADO Y NOS INFORME SI ES POSITIVO O NEGATIVO

    int numero;

    printf("Ingresa un numero: ");
    scanf("%i", &numero);

    if (numero > 0){
        printf("Es positivo");
    }
    else{
       printf("Es negativo");
    }
    return 0;
}
