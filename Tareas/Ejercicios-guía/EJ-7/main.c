#include <stdio.h>

int main(int argc, char const *argv[])
{
    // HACER EL ALGORITMO QUE NOS PERMITA INTRODUCIER UN NUMERO POR TECLADO Y NOS INFORME SI ES PAR O IMPAR

    int numero;

    // Ingreso un valor numero por teclado y lo guardo en la variable numero 
    printf("Ingresa un numero: ");
    scanf("%i", &numero);

    // Si el numero ingresado es par (que el modulo del numero me de cero 0)
    if (numero%2 == 0){
        // Entonces el numero es par
        printf("Es par");
    }
    else{

        //Caso contrario es impar 
       printf("Es impar");
    }
    
    return 0;
}
