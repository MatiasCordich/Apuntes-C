#include <stdio.h>

int main(int argc, char const *argv[])
{
    // SE REGISTRAN DE LOS EMPLEADOS DE UNA EMPRESA NUMERO DE LEGAJO, SUELDO Y SEXO (1 FEMENINO Y 2 MASCULINO). DISEÑAR UN PSEUDOCÓDIGO Y CODIFICAR EN C UN ALGORITMO QUE PERMITA INFORMAR CUANTAS MUJERES GANAN MÁS DE $16000 Y CUANTOS HOMBRES GANAN MENOS DE $10000.

    // Delcaro mis variables
    char respuesta;
    int sexo;
    int numero_legajo;
    int sueldo;
    int contador_sueldo_femenino = 0;
    int contador_sueldo_masculino = 0;

    // Ingreso el valor de respuesta por consola
    printf("Desea comenzar con el programa? s/n: ");
    scanf("%c", &respuesta);

    // Ejecuto el bucle mientras se cumpla la condicion
    while (respuesta == 's' || respuesta == 'S')
    {
        // Ingreso el numero de legajo
        printf("Ingrese el numero de legajo: ");
        scanf(" %i", &numero_legajo);

        // Ingreso el sexo del empleado
        printf("Ingrese el sexo del empleado 1 (FEMENINO) o 2 (MASCULINO): ");
        scanf(" %i", &sexo);

        // Ingreso el sueldo del empleado
        printf("Ingrese el sueldo del empleado: ");
        scanf(" %i", &sueldo);


        // Realizo las evaluaciones que me piden
        if (sexo == 1 && sueldo > 16000)
        {
            // Si el empleado es femenino y gana mas de 16000 entonces la contabilizo
            contador_sueldo_femenino = contador_sueldo_femenino + 1;
        }

        if (sexo == 2 && sueldo < 10000)
        {
            // Si el empleado es masculino y gana menos de 10000 entonces lo contabilizo
            contador_sueldo_masculino = contador_sueldo_masculino + 1;
        }

        // Pregunto si quiero seguir con el programa para seguir iterando o no
        printf("Desea seguir con el programa?: ");
        scanf(" %c", &respuesta);
    }

    //Muestro los resultados por pantalla
    printf("En la empresa %i mujeres ganan mas de $16000\n", contador_sueldo_femenino);
    printf("En la empresa %i hombres ganan menos de $10000\n", contador_sueldo_masculino);

    printf("Fin del programa");

    return 0;
}
