#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DE LOS ALUMNOS DE LA ESCUELA SE REGISTRA SU APELLIDO Y SU NOMBRE Y SU ALTURA. DISEÑAR EN PSEUDOCODIGO UN ALGORITMO QUE INDIQUE EL NOMBRE DEL ALUMNO MÁS ALTO Y SU ALTURA (SOLO UNO ES EL MÁS ALTO).

    // Declar mis variables
    char nombre_alumno[50];
    char nombre_alumno_mas_alto[50];
    float altura_alumno;
    float alumno_mas_alto = 0;
    char respuesta;

    // Inicio el bucle
    do
    {

        // Ingreso el nombre del alumno
        printf("Ingrese el nombre del alumno: ");
        scanf("%s", nombre_alumno);

        // Ingreso la altura del alumno
        printf("Ingrese la altura del aluno: ");
        scanf(" %f", &altura_alumno);

        // Calculo la altura maxima y guardo la altura y el nombre del alumno mas alto
        if(altura_alumno > alumno_mas_alto) {
            nombre_alumno_mas_alto[50] = nombre_alumno; // El problema esta aca que no puedo asignarle un string 
            alumno_mas_alto = altura_alumno;
        }

        // Pregunto si hay mas alumnos

        printf("Hay mas alumnos? s/n: ");
        scanf(" %c", &respuesta);

    } while (respuesta == 's' || respuesta == 'S');
    

    // Escribo la respuesta
    printf("El alumno mas alto es %s con %.2f metros", nombre_alumno_mas_alto, alumno_mas_alto);


    return 0;
}
