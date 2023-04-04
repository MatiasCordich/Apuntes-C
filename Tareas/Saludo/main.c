#include <stdio.h>

int main(int argc, char const *argv[])
{
    // HACER UN PROGRAMA QUE PREGUNTE SI SE QUIERE MOSTRA UN SALUDO. EN CASO DE QUE QUIERA, QUE LO MUESTRE

    char respuesta;

    printf("Quiere recibir un saludo (s/n): ");
    scanf("%c", &respuesta);

    if(respuesta == 's'){
        printf("Hola, como estas?\n");
    }

    printf("Fin");

   
    return 0;
}
