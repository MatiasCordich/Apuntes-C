/*
-------- TRABAJADO INTEGRADOR FINAL --------
Fecha
Autores
Materia: Progrmacion I (C)
----------------------------------
Universidad Nacional de Lomas de Zamora
----------------------------------
-------- AGENDA --------
Objetivo:
    Realizar un programa el cual permita gestionar una agenda de 100 personas

Requisitos:
    1- Cada persona agendada deberá contar con un nombre (iniciales), un apellido, DNI, un teléfono y una fecha de cumpleaños
    2- Se deberá poder ver un listado general de todas las personas registradas
    3- Se deberá poder mostrar un listado de todas las personas nacidas en un año en específico
    4- Se deberá poder mostrar quién es la persona más joven del listado
    5- Se deberá poder editar los datos de una persona en específico
    6- Debe existir una funcionalidad para mostrar los datos de una persona
    7- Se deberá poder buscar una persona por su DNI
    8- El DNI de una persona debe ser único
*/

#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int anio
} s_fecha;

typedef struct
{
    char nombre;
    char apellido;
    int dni;
    int telefono;
    s_fecha cumpleanios;
} s_persona;

int main(int argc, char const *argv[])
{
    char respuesta_1;
    char nombre;
    char apellido;
    int i = 0;
    int dni;
    int telefono;
    int cant_elementos = 0;
    s_fecha fecha_cumpleanios;
    s_persona persona;
    s_persona personas[100];

    // Ingreso un valor para respuesta para determinar si voy a bucle o no
    printf("---------------------- AGENDA ----------------------\n");
    printf("Bienvenido/a a la agenda, desea comenzar con el programa? s/n: ");
    scanf("%c", &respuesta_1);
    printf("---------------------------------------------------------\n");

    while (respuesta_1 == 's' || respuesta_1 == 'S')
    {
        printf("---------------------- INGRESO DE DATOS ----------------------\n");
        printf("---------------------- NOMBRE ----------------------\n");
        printf("Por favor, ingrese un nombre: ");
        scanf(" %c", &nombre);
        persona.nombre = nombre;
        printf("---------------------- APELLIDO ----------------------\n");
        printf("Por favor, ingrese un apellido: ");
        scanf(" %c", &apellido);
        persona.apellido = apellido;
        printf("---------------------- DNI ----------------------\n");
        while (1)
        {
            printf("Por favor, el DNI (unico): ");
            scanf(" %d", &dni);
            for (i = 0; i < cant_elementos; i++)
            {
                if (i == 0)
                {
                    persona.dni = dni;
                    break;
                }

                if (personas[i].dni == dni)
                {
                    printf("ERROR!!! EL DNI DEBE SER UNICO.\n");
                }
                else
                {
                    persona.dni = dni;
                    break;
                }
            }
        }
        printf("---------------------- TELEFONO ----------------------\n");
        printf("Por favor, ingrese un telefono: ");
        scanf(" %d", &telefono);
        persona.telefono = telefono;
        printf("---------------------- CUMPLEANIOS ----------------------\n");
        printf("Por favor, ingrese el dia: ");
        scanf(" %i", &fecha_cumpleanios.dia);
        persona.cumpleanios.dia = fecha_cumpleanios.dia;
        printf("Por favor, ingrese el mes: ");
        scanf(" %i", &fecha_cumpleanios.mes);
        persona.cumpleanios.mes = fecha_cumpleanios.mes;
        printf("Por favor, ingrese el anio: ");
        scanf(" %i", &fecha_cumpleanios.anio);
        persona.cumpleanios.anio = fecha_cumpleanios.anio;
        printf("--------------------------------------------------------------\n");
    }

    return 0;
}
