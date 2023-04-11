#include <stdio.h>

int main(int argc, char const *argv[])
{
    // CREAR UN PROGRAMA QUE LE SOLICITE AL USUARIO SI QUIERE SEGUIR O NO, Y SE REPITA HATA QUE EL USUARIO NO DESEA SEGUIR

    // Declaro mi variable respuesta
    char respuesta;

    // Le pregunto al usuario si quiere empezar con el programa

    printf("Bienvenido/a, desea comenzar con el programa? s/n: ");
    scanf("%c", &respuesta);

    // Hago un bucle while que se repita si el valor de la variable respuesta es igual a 's
    while (respuesta == 's')
    {

        // Le pregunto al usuario si quiere seguir o no con la ejecucion del programa y guardo el valor en la variable respuesta
        printf("Desea seguir con la ejecucion del programa? s/n: ");
        scanf(" %c", &respuesta);

        // Si quiere seguir sigo con el bucle
    }

    // Si no quiere seguir se termina el bucle y es el fin del programa

    printf("Fin del programa");
    return 0;
}