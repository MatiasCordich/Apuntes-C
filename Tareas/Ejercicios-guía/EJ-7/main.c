#include <stdio.h>

int main(int argc, char const *argv[])
{
    // HACER EL ALGORITMO QUE NOS PERMITA INTRODUCIER UN NUMERO POR TECLADO Y NOS INFORME SI ES PAR O IMPAR

    int numero;

    printf("Ingresa un numero: ");
    scanf("%i", &numero);

    if (numero%2 == 0){
        printf("Es par");
    }
    else{
       printf("Es impar");
    }
    
    return 0;
}
