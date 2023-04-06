#include <stdio.h>

int main(int argc, char const *argv[])
{
    // HACER UN PROGRAMA QUE PREGUNTE SI SE QUIERE MOSTRA UN SALUDO. EN CASO DE QUE QUIERA, QUE LO MUESTRE

    char respuesta;

    // Ingreso por teclado la respesta y la guarda en la variable respuesta

    printf("Quiere recibir un saludo (s/n): ");
    scanf("%c", &respuesta);

    // Si la respuesta es igual al caracter 's' imprimo el mensaje de saludar

    if(respuesta == 's'){
        printf("Hola, como estas?\n");
    }

    // Caso contrario que no me imprima nada

    printf("Fin");

   
    return 0;
}
