#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ESCRIBIR UN ALGORITMO NECESARIO PARA CALCULAR Y MOSTRAR EL CUADRADO DE UN NUMERO. EL NUMERO DEBE SER MAYOR QUE CERO, EN CASO DE ERROR QUE APAREZCA EL MENSAJE DE "ERROR: EL NUMERO DEBE SER MAYOR QUE CERO " 

    int numero;
    int cuadrado_de_un_numero;

    // Ingreso un numero por teclado y lo guardo en la variable
    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    // Dicho numero si es mayor que 0 realiza la siguiente operacion
    if(numero > 0){
        
        // Calculo el cuadrado de un numero
        cuadrado_de_un_numero = numero * numero;

        // Imprimo el valor de ese cuadrado de un numero
        printf("El cuadrado de %i es %i", numero, cuadrado_de_un_numero);
    } else {

        // Caso contrario que no sea mayor a cero me imprima este mensaje de error
        printf("ERROR: El numero debe ser mayor que cero");
    }

    return 0;
}
