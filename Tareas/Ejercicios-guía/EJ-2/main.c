#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ESCRIBIR UN ALGORITMO NECESARIO PARA CALCULAR Y MOSTRAR EL CUADRADO DE UN NUMERO. EL NUMERO DEBE SER MAYOR QUE CERO, EN CASO DE ERROR QUE APAREZCA EL MENSAJE DE "ERROR: EL NUMERO DEBE SER MAYOR QUE CERO " 

    int numero;
    int cuadrado_de_un_numero;


    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    if(numero > 0){
        
        cuadrado_de_un_numero = numero * numero;

        printf("El cuadrado de %i es %i", numero, cuadrado_de_un_numero);
    } else {
        printf("ERROR: El numero debe ser mayor que cero");
    }

    return 0;
}
