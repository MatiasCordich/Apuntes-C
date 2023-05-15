#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
        HACER UN PROGRAMA EN C QUE SOLICITE LA CANTIDAD DE ESTUDIANTES QUE TIENE UN CURSO
        LUEGO INGRESAR PARA CADA ESTUDIANTE SU INICIAL Y SU NOTA
        MOSTRAR LA INICIAL Y LA NOTA DEL ESTUDIANTE CON MAYHOR NOTA Y EL PROMEDIO DE TODAS LAS NOTAS
    */

    int cant_estudiantes;
    int contador = 0;
    float nota_estudiante;
    float mayor_nota;
    float suma_notas = 0;
    float promedio_notas;
    char inicial_estudiante;
    char incial_mayor_nota;

    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%i", &cant_estudiantes);

    while(contador < cant_estudiantes){
        printf("--------------------------------\n");
        printf("Ingrese la inicial del estudiante: ");
        scanf(" %c", &inicial_estudiante);
        printf("Ingrese la nota del estudiante: ");
        scanf(" %f", &nota_estudiante);

        if (contador == 0)
        {
            incial_mayor_nota = inicial_estudiante;
            mayor_nota = nota_estudiante;
        }
        else
        {
            if (nota_estudiante > mayor_nota)
            {
                incial_mayor_nota = inicial_estudiante;
                mayor_nota = nota_estudiante;
            }
        }

        suma_notas = suma_notas + nota_estudiante;
        
        contador++;
    }

    promedio_notas = suma_notas / cant_estudiantes;

    printf("-------- ESTUDIANTE CON MAYOR NOTA --------\n");
    printf("INCIAL: %c\n", incial_mayor_nota);
    printf("NOTA: %.2f\n", mayor_nota);
    printf("-------- PROMEDIO NOTAS --------\n");
    printf("PROMEDIO: %.2F\n", promedio_notas);

    return 0;
}
