#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
   EN UN CLUB SE REGISTRAN DE UNO EN UNO LOS SIGUIENTES DATOS DE SUS SOCIOS:
    - NUMERO DE SOCIO
    - APELLIDO Y NOMBRE
    - EDAD
    - TIPO DE DEPORTE QUE PRACTICA (1. TENIS, 2. RUGBY, 3. VÓLEY, 4. HOCKEY, 5.FÚTBOL, 6. PADDLE)
    DISEÑAR EN PSEUDOCÓDIGO UN ALGORITMO QUE PERMITA EMITIR POR PANTALLA CUANTOS SOCIOS PRACTICAN TENIS Y CUANTOS PADDLE Y EL PROMEDIO DE EDAD DE LOS JUGADORES DE CADA DEPORTE.
    */

    // Declaro mis variables

    int numero_socio;
    char nombre_socio;
    char apellido_socio;
    int edad_socio;
    int tipo_deporte;
    int suma_tenis = 0;
    int suma_paddle = 0;
    int suma_edad_tenis = 0;
    int suma_edad_rugby = 0;
    int suma_edad_voley = 0;
    int suma_edad_hockey = 0;
    int suma_edad_futbol = 0;
    int suma_edad_paddle = 0;
    int cant_socios_tenis = 0;
    int cant_socios_rugby = 0;
    int cant_socios_voley = 0;
    int cant_socios_hockey = 0;
    int cant_socios_futbol = 0;
    int cant_socios_paddle = 0;
    int prom_edad_tenis;
    int prom_edad_rugby;
    int prom_edad_voley;
    int prom_edad_hockey;
    int prom_edad_futbol;
    int prom_edad_paddle;
    char respuesta;

    printf("Desea comenzar con el programa? s/n: ");
    scanf(" %c", &respuesta);

    while (respuesta == 's' || respuesta == 'S')
    {
        // Ingreso los valores por teclado
        printf("Ingrese el numero de socio: ");
        scanf(" %i", &numero_socio);
        printf("Ingrese el nombre del socio: ");
        scanf(" %c", &nombre_socio);
        printf("Ingrese el apellido del socio: ");
        scanf(" %c", &apellido_socio);
        printf("Ingrese la edad del socio: ");
        scanf(" %i", &edad_socio);
        printf("Ingrese el deporte que practica el socio (1.TENIS 2.RUGBY 3.VOLEY 4.HOCKEY 5.FUTBOL 6.PADDLE): ");
        scanf(" %i", &tipo_deporte);

        // Realizo un switch en base al valor escrito en tipo_deportes
        switch (tipo_deporte)
        {
        case 1:

            // Suma la edad del socio que practica tenis;
            suma_edad_tenis = suma_edad_tenis + edad_socio;

            // Sumo en 1 la cantidad de socios que practican tenis
            cant_socios_tenis = cant_socios_tenis + 1;

            // Voy calculando el promedio de edad de socios que practican tenis
            prom_edad_tenis = suma_edad_tenis / cant_socios_tenis;
            break;
        case 2:
            suma_edad_rugby = suma_edad_rugby + edad_socio;
            cant_socios_rugby = cant_socios_rugby + 1;
            prom_edad_rugby = suma_edad_rugby / cant_socios_rugby;
            break;
        case 3:
            suma_edad_voley = suma_edad_voley + edad_socio;
            cant_socios_voley = cant_socios_voley + 1;
            prom_edad_voley = suma_edad_voley / cant_socios_voley;
            break;
        case 4:
            suma_edad_hockey = suma_edad_hockey + edad_socio;
            cant_socios_hockey = cant_socios_hockey + 1;
            prom_edad_hockey = suma_edad_hockey / cant_socios_hockey;
            break;
        case 5:
            suma_edad_futbol = suma_edad_futbol + edad_socio;
            cant_socios_futbol = cant_socios_futbol + 1;
            prom_edad_futbol = suma_edad_futbol / cant_socios_futbol;
            break;
        case 6:
            suma_edad_paddle = suma_edad_paddle + edad_socio;
            cant_socios_paddle = cant_socios_paddle + 1;
            prom_edad_paddle = suma_edad_paddle / cant_socios_paddle;
            break;

        default:
            printf("ERROR: NO INGRESO UN DEPORTE VALIDO\n");
            break;
        }

        // Pregunto si deseo seguir con el programa
        printf("Desea seguir con el programa? s/n: ");
        scanf(" %c", &respuesta);
    }

    // Imprimo los resultados finales
    printf("-----------------\n");
    printf("----- CANTIDAD SOCIOS -----\n");
    printf("TENIS: %i\n", cant_socios_tenis);
    printf("PADDLE: %i\n", cant_socios_paddle);
    printf("----- PROMEDIO EDAD SOCIOS EN CADA DEPORTES -----\n");
    printf("TENIS: %i\n", prom_edad_tenis);
    printf("RUGBY: %i\n", prom_edad_rugby);
    printf("VOLEY: %i\n", prom_edad_voley);
    printf("HOCKEY: %i\n", prom_edad_hockey);
    printf("FUTBOL: %i\n", prom_edad_futbol);
    printf("PADDLE: %i\n", prom_edad_paddle);
    printf("-----------------\n");

    printf("Fin del programa");

    return 0;
}
