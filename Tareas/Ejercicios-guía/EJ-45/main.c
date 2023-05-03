#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    UN PROFESOR DE MATEMÁTICA DE UN ESTABLECIMIENTO EDUCATIVO REGISTRA DE CADA ALUMNO
        - N° DE LEGAJO,
        - NOMBRE Y PROMEDIO.
    SEGÚN EL PROMEDIO DESEA SABER CUÁNTOS ALUMNOS APROBARON (PROMEDIO MAYOR O IGUAL A 7), CUANTOS RINDEN EN DICIEMBRE (PROMEDIO MENOR A 7 Y MAYOR O IGUAL A 4) Y CUANTOS RINDEN EN MARZO (PROMEDIO MENOR A 4).
    ADEMÁS, DESEA CONOCER EL N° DE LEGAJO Y NOMBRE DEL ALUMNO CON MEJOR PROMEDIO.
    */

    // Declaro mis variables

    char nombre_alumno;
    char nombre_alumno_mejor_promedio;
    char respuesta;
    int i;
    int num_legajo_alumno;
    int legajo_alumno_mejor_promedio;
    int nota;
    int suma_nota = 0;
    int cant_alumnos_aprobados = 0;
    int cant_alumnos_diciembre = 0;
    int cant_alumnos_marzo = 0;
    float promedio;
    int mejor_promedio;
    int cont = 0;

    printf("Desea comenzar con el programa? s/n: ");
    scanf(" %c", &respuesta);

    while (respuesta == 's' || respuesta == 'S')
    {
        // Ingreso los valores por teclado
        printf("Ingrese el numero de legajo del alumno: ");
        scanf(" %i", &num_legajo_alumno);
        printf("Ingrese el nombre del alumno: ");
        scanf(" %c", &nombre_alumno);

        // Ingreso dos notas por alumno
        for (i = 0; i < 2; i++)
        {
            printf("Ingrese la nota del alumno: ");
            scanf(" %i", &nota);
            suma_nota = suma_nota + nota;
            promedio = suma_nota / 2.00;
        }

        // Evaluo y contabilizo la cantidad de alumnos y su situacion academica
        if (promedio >= 7)
        {
            cant_alumnos_aprobados = cant_alumnos_aprobados + 1;
        }

        if (promedio < 7 && promedio >= 4)
        {
            cant_alumnos_diciembre = cant_alumnos_diciembre + 1;
        }

        if (promedio < 4)
        {
            cant_alumnos_marzo = cant_alumnos_marzo + 1;
        }

        // Evaluo que alumno tuvo mejor promedio
        if (cont == 0)
        {
            nombre_alumno_mejor_promedio = nombre_alumno;
            legajo_alumno_mejor_promedio = num_legajo_alumno;
            mejor_promedio = promedio;
        }
        else
        {
            if (promedio > mejor_promedio)
            {
                nombre_alumno_mejor_promedio = nombre_alumno;
                legajo_alumno_mejor_promedio = num_legajo_alumno;
                mejor_promedio = promedio;
            }
        }

        // Contabilizo en 1
        cont = cont + 1;

        // Reinicio la suma nota
        suma_nota = 0;

        // Pregunto si deseo seguir con el programa
        printf("Desea seguir con el programa? s/n: ");
        scanf(" %c", &respuesta);
    }

    // Imprimo los resultados finales
    printf("-----------------\n");
    printf("----- CANTIDAD ALUMNOS -----\n");
    printf("APROBADOS: %i\n", cant_alumnos_aprobados);
    printf("DICIEMBRE: %i\n", cant_alumnos_diciembre);
    printf("MARZO: %i\n", cant_alumnos_marzo);
    printf("----- ALUMNO MEJOR PROMEDIO -----\n");
    printf("NOMBRE: %c\n", nombre_alumno_mejor_promedio);
    printf("LEGAJO: %i\n", legajo_alumno_mejor_promedio);
    printf("-----------------\n");

    printf("Fin del programa");

    return 0;
}
