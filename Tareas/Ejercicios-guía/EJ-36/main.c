#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DISEÑAR UN ALGORITMO QUE PERMITA CALCULAR EL PROMEDIO DE UN ALUMNO SABIENDO QUE SE INGRESA POR ALUMNO LA NOTA DE 6 MATERIAS Y SU NOMBRE. NO SE SABE LA CANTIDAD DE ALUMNOS. SE PIDE MOSTRAR: NOMBRE DEL ALUMNO: PROMEDIO: 

    char nombre_alumno[50];
    float promedio;
    int nota;
    int suma_notas = 0;
    int i;
    char respuesta; 

    do
    {

        printf("Ingresar el nombre del alumno: ");
        scanf(" %s", nombre_alumno);

        for (size_t i = 0; i < 6; i++)
        {
            printf("Ingresar las notas del alumno: ");
            scanf(" %i", nota);

            suma_notas = suma_notas + nota;
        }

        promedio = suma_notas / 60;

        printf("NOMBRE DEL ALUMNO: %s  PROMEDIO: %.2f\n", nombre_alumno, promedio);
        
        printf("Desea seguir con el programa? s/n: ");
        scanf(" %c", &respuesta);

        suma_notas = 0;

    } while (respuesta == 's' || respuesta == 'S');
    
    printf("Fin del programa");

    return 0;
}
