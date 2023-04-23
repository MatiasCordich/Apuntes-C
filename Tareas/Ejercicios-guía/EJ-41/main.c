#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ÍDEM AL ANTERIOR AGREGANDO EN EL INFORME FINAL NOMBRE DEL EMPLEADO DE MAYOR SALARIO CON EL MONTO DEL SALARIO CORRESPONDIENTE Y NOMBRE DEL EMPLEADO DE MENOR SALARIO CON EL MONTO DEL SALARIO CORRESPONDIENTE.

    // Declaro mis variables
    char nombre_empleado[50];
    char nombre_empleado_mayor_salario[50];
    char nombre_empleado_menor_salario[50];
    char respuesta;
    int salario_semanal;
    int salario_semanal_anterior;
    int tarifa_horaria;
    int horas_trabajadas;
    int mayor_salario = 0;
    int menor_salario = 0;
    int cant_empleados = 0;

    // Incio un bucle hasta que desee dejar de seguir con el programa
    do
    {

        // Inicializo la variable salario semanal en 0
        salario_semanal = 0;

        // Ingreso el nommbre del empleado
        printf("Ingresar el nombre del empleado: ");
        scanf(" %s", nombre_empleado);

        // Ingreso la tarifa horaria
        printf("Ingresar la tarifa horaria del empleado: ");
        scanf(" %i", &tarifa_horaria);

        // Ingreso las horas trabajadas
        printf("Ingresar la cantiad de horas trabajadas por el empleado: ");
        scanf(" %i", &horas_trabajadas);

        // Calculo el salario_semanal del empleado
        salario_semanal = (tarifa_horaria * horas_trabajadas) * 5;

        // Contabilizo la cantidad de empleados
        cant_empleados = cant_empleados + 1;

        // Evaluo que emppleado tuvo el mayor y menor salario semanal

        if (cant_empleados == 1)
        {
            // El primer empleado es el que tiene el mayor y menor salario semanal
            nombre_empleado_mayor_salario[50] = nombre_empleado;
            nombre_empleado_menor_salario[50] = nombre_empleado;
            mayor_salario = salario_semanal;
            menor_salario = salario_semanal;
        }
        else
        {
            // Los empleados que vengan seran evaluados en esta condicion

            if (salario_semanal > salario_semanal_anterior)
            {
                nombre_empleado_mayor_salario[50] = nombre_empleado;
                mayor_salario = salario_semanal;
            }

            if (salario_semanal < salario_semanal_anterior)
            {
                nombre_empleado_menor_salario[50] = nombre_empleado;
                menor_salario = salario_semanal;
            }
        }

        // Muestro por pantalla los datos del empleado actual
        printf("-----------------\n");
        printf("EMPLEADO: %s\n", nombre_empleado);
        printf("SALARIO SEMANAL: %i\n", salario_semanal);
        printf("-----------------\n");

        // Pregunto si quiero seguir trabajando
        printf("Desea seguir con el programa? s/n: ");
        scanf(" %c", &respuesta);

        // El salario semanal que obtuve lo guardo en la variable salario_semanal_anterior
        salario_semanal_anterior = salario_semanal;

    } while (respuesta == 's' || respuesta == 'S');

    // Imprimo por pantalla los resultados finales
    printf("Se le calculo el sueldo semanal a %i empleados\n", cant_empleados);

    printf("-----------------\n");
    printf("----- EMPLEADO CON MAYOR SUELDO SEMANAL -----\n");
    printf("NOBMRE: %s\n", nombre_empleado_mayor_salario);
    printf("SALARIO SEMANAL: %i\n", mayor_salario);
    printf("----- EMPLEADO CON MENOR SUELDO SEMANAL -----\n");
    printf("NOBMRE: %s\n", nombre_empleado_menor_salario);
    printf("SALARIO SEMANAL: %i\n", menor_salario);
    printf("-----------------\n");

    printf("Fin del programa");

    return 0;
}
