#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ESCRIBIR UN PROGRAMA QUE CALCULE EL SALARIO SEMANAL DE CADA TRABAJADOR DE UNA EMPRESA DADA LA TARIFA HORARIA Y EL NÚMERO DE HORAS TRABAJADAS ADEMÁS DEL NOMBRE. SE DEBE PERMITIR AL USUARIO INDICAR CUANDO DESEA DEJAR DE INGRESAR DE INGRESAR DATOS.

    char nombre_empleado[50];
    float promedio;
    int tarifa_horaria;
    int horas_trabajadas;
    float salario_semanal;
    char respuesta;

    do
    {

        // Inicializo la variable salario semanal en 0
        salario_semanal = 0;

        // Ingeso el nombre del empleado
        printf("Ingresar el nombre del empleado: ");
        scanf(" %s", nombre_empleado);

        // Ingeso la tarifa horaria del emepleado
        printf("Ingresar la tarifa horaria del empleado: ");
        scanf(" %i", &tarifa_horaria);

        // Ingeso la cantidad de horas que trabajo
        printf("Ingresar la cantiad de horas trabajadas por el empleado: ");
        scanf(" %i", &horas_trabajadas);

        // Calculo el salario semanal del empleado
        salario_semanal = (tarifa_horaria * horas_trabajadas) * 5;

        // Muestro por pantalla los datos del empleado actual
        printf("-----------------\n");
        printf("EMPLEADO: %s\n", nombre_empleado);
        printf("SALARIO SEMANAL: %.2f\n", salario_semanal);
        printf("-----------------\n");

        // Pregunto si quiero seguir trabajando
        printf("Desea seguir con el programa? s/n: ");
        scanf(" %c", &respuesta);     

    } while (respuesta == 's' || respuesta == 'S');

    printf("Fin del programa");

    return 0;
}
