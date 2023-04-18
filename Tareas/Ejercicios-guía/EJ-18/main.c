#include <stdio.h>

int main(int argc, char const *argv[])
{
    // INGRESAR UN NÚMERO, ENTERO Y EFECTUAR LA SUMA DE TODOS LOS NÚMEROS QUE LE ANTECEDEN, COMENZANDO DESDE 0 Y MOSTRAR EL RESULTADO POR PANTALLA. 

    // Declaro mi variable
    int i;
    int numero;
    int suma = 0;

    // Ingreso el valor de numero por teclado
    printf("Ingrese un numero: ");
    scanf(" %i", &numero);

    // Bucle for
    for (i = 0; i <= numero; i++)
    {
        suma = suma + i;
    }
    
    // Imprimo el valor por pantalla
    printf("%i", suma);
    return 0;
}
