#include <stdio.h>

int main(int argc, char const *argv[])
{
    // REALIZAR UN ALGORITMO QUE PERMITA INGRESAR UN NUMERO CORRESPONDIENTE A LOS DIAS DE LA SEMANA Y MUESTRE EL NOMBRE DEL DIA. QUE SE PERMITA TRABAJAR HASTA QUE EL USUARIO INDIQUE LO CONTRARIO

    // Declaro mis variables
    int numero;
    char respuesta;

    // Pregunto por consola si quiero empezar el programa
    printf("Desea comenzar con el programa s/n: ");
    scanf("%c", &respuesta);

    // Realizo el bucle que se realizara mientras el valor de la variable respuesta sea 's'
    while (respuesta == 's')
    {
        // Ingreso un valor del 1 al 7 que sera guardo en la variable numero
        printf("Ingrese un numero del 1 al 7: ");
        scanf("%i", &numero);

        // Evaluo el valor de la variable numero y base a la evulacion muestro por pantalla un dia de la semana

        switch (numero)
        {
        case 1:
            printf("LUNES\n");
            break;
        case 2:
            printf("MARTES\n");
            break;
        case 3:
            printf("MIERCOLES\n");
            break;
        case 4:
            printf("JUEVES\n");
            break;
        case 5:
            printf("VIERNES\n");
            break;
        case 6:
            printf("SABADO\n");
            break;
        case 7:
            printf("DOMINGO\n");
            break;
        default:
             printf("ERROR: INGRESE UN NUMERO DENTRO DEL CAMPO ESTABLECIDO\n");
            break;
        }

        // Pregunto por pantalla si deseo seguir continuando con el programa y guardo ese valor en la variable respuesta
        printf("Desea seguir continuando con el programa s/n: ");
        scanf(" %c", &respuesta);

        // Si el valor ingresado es 's' entonces vuelvo a repetir el ciclo
    }

    // Si el valor ingresado es 'n' se salta el ciclo y me trae hasta aca que es el fin del codigo
    printf("Fin del programa");

    return 0;
}
