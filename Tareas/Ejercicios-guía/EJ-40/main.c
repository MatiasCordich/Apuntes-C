#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ÍDEM AL ANTERIOR, PERO INFORMANDO AL FINALIZAR (EL INGRESO DE DATOS Y LOS CÁLCULOS CORRESPONDIENTES) LA CANTIDAD DE EMPLEADOS A LOS QUE SE LES CALCULO EL SALARIO.

    // Declario mis variables
    char nombre_empleado[50];
    char respuesta;
    float salario_semanal;
    int tarifa_horaria;
    int horas_trabajadas;
    int cant_empleados = 0;

    // Incio un bucle hasta que desee dejar de seguir con el programa
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

        // Aumento la cantidad de empleados en 1
        cant_empleados = cant_empleados + 1;

        // Pregunto si quiero seguir trabajando
        printf("Desea seguir con el programa? s/n: ");
        scanf(" %c", &respuesta);

    } while (respuesta == 's' || respuesta == 'S');

    // Imprimo por pantalla los resultados finales
    printf("Se le calculo el sueldo semanal a %i empleados\n", cant_empleados);

    printf("Fin del programa");

    return 0;
}
