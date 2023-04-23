#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ESCRIBIR UN PROGRAMA QUE DETERMINE SI UN AÑO ES BISIESTO. UN AÑO ES BISIESTO SI ES MÚLTIPLO DE 4. LOS AÑOS MÚLTIPLOS DE 100 NO SON BISIESTOS, SALVO SI ELLOS TAMBIÉN SON MÚLTIPLOS DE 400 (2000 ES BISIESTO, PERO 1900 NO).

    int anio;
    char respuesta;

    do
    {
        // Ingreso un anio
        printf("Ingrese un anio: ");
        scanf("%i", &anio);

        // Evaluo si ese anio es bisiesto o no

        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
        {
            printf("El anio %i es bisiesto\n", anio);
        }
        else
        {
            printf("El anio %i no es bisiesto\n", anio);
        }

        // Pregunto si quiero seguir trabajando
        printf("Desea seguir con el programa? s/n: ");
        scanf(" %c", &respuesta);
    } while (respuesta == 's' || respuesta == 'S');

    printf("Fin del progrmaa");
    return 0;
}
