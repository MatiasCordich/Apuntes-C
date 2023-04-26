#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    DE LAS 20 PARTICIPANTES DE UN CONCURSO DE BELLEZA SE VAN REGISTRANDO DE UNO EN UNO LOS IGUIENTES DATOS:
        -APELLIDO Y NOMBRE
        -PUNTOS POR INTELIGENCIA
        -PUNTOS POR CULTURA GENERAL
        -PUNTOS POR BELLEZA
    SE NECESITA INFORMAR POR PANTALLA:
        - APELLIDO Y NOMBRE DE LA CONCURSANTE DE MAYOR PUNTAJE GENERAL.
        - PUNTAJE ACUMULADO POR TODAS LAS PARTICIPANTES EN CULTURA GENERAL, EN INTELIGENCIA Y EN BELLEZA.
        - DE LOS TRES PUNTAJES ACUMULADOS EN EL ÍTEM ANTERIOR CUAL FUE EL MENOR.
    */

    char nombre_concursante;
    char apellido_concursante;
    char nombre_concursante_mayor_puntaje;
    char apellido_concursante_mayor_puntaje;
    int puntos_inteligencia;
    int i;
    int puntos_cultura;
    int puntos_belleza;
    int suma_puntaje;
    int mayor_puntaje_concursante;
    int sum_inteligencia = 0;
    int sum_cultura = 0;
    int sum_belleza = 0;
    int menor_puntaje_acumulado;

    for (i = 0; i < 20; i++)
    {
        printf("Ingrese el nombre de la concursante: ");
        scanf(" %c", &nombre_concursante);
        printf("Ingrese el apellido de la concursante: ");
        scanf(" %c", &apellido_concursante);
        printf("Ingrese los puntos de inteligencia de la concursante: ");
        scanf(" %i", &puntos_inteligencia);
        sum_inteligencia = sum_inteligencia + puntos_inteligencia;
        printf("Ingrese los puntos de cultura general de la concursante: ");
        scanf(" %i", &puntos_cultura);
        sum_cultura = sum_cultura + puntos_cultura;
        printf("Ingrese los puntos de belleza de la concursante: ");
        scanf(" %i", &puntos_belleza);
        sum_belleza = sum_belleza + puntos_belleza;

        suma_puntaje = puntos_inteligencia + puntos_cultura + puntos_belleza;

        if (i == 0)
        {
            nombre_concursante_mayor_puntaje = nombre_concursante;
            apellido_concursante_mayor_puntaje = apellido_concursante;
            mayor_puntaje_concursante = suma_puntaje;
        }
        else
        {
            if (suma_puntaje > mayor_puntaje_concursante)
            {
                nombre_concursante_mayor_puntaje = nombre_concursante;
                apellido_concursante_mayor_puntaje = apellido_concursante;
                mayor_puntaje_concursante = suma_puntaje;
            }
        }
    }

    printf("----- CONCURSANTE CON MAS PUNTAJE -----\n");
    printf("NOMBRE Y APELLIDO: %c %c\n", nombre_concursante_mayor_puntaje, apellido_concursante_mayor_puntaje);
    printf("PUNTAJE GENERAL: %i\n", mayor_puntaje_concursante);
    printf("----- PUNTAJES GENERALES DE LAS CATEGORIAS -----\n");
    printf("INTELEGENCIA: %i\n", sum_inteligencia);
    printf("CULTURA GENERAL: %i\n", sum_cultura);
    printf("BELLEZA: %i\n", sum_belleza);

    if (sum_inteligencia < sum_cultura < sum_belleza)
    {
        printf("----- MENOR PUNTAJE DE LAS CATEGORIAS -----\n");
        printf("MENOR PUNTAJE: INTELIGENCIA CON %i PUNTOS\n", sum_inteligencia);
    }
    else if (sum_cultura < sum_inteligencia < sum_belleza)
    {
        printf("----- MENOR PUNTAJE DE LAS CATEGORIAS -----\n");
        printf("MENOR PUNTAJE: CULTURA GENERAL CON %i PUNTOS\n", sum_cultura);
    }
    else
    {
        printf("----- MENOR PUNTAJE DE LAS CATEGORIAS -----\n");
        printf("MENOR PUNTAJE: BELLEZA CON %i PUNTOS\n", sum_belleza);
    }

    return 0;
}
