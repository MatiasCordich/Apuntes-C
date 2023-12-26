#include <stdio.h>
#include <stdlib.h>
#include "agenda.h"

int main(int argc, char const *argv[])
{
    // Declarando la agenda
    Contacto agenda[MAX_CONTACTACTOS];
    int num_contactos = 0;

    // Cargar la agenda desde el archivo
    crearAgenda(agenda, &num_contactos, "agenda.dat");

    int opcion;

    do
    {

        // Mostrar el menú de opciones
        printf("------ BIENVENIDO A LA AGENDA ------\n");
        printf("\n=== Menú de Opciones ===\n");
        printf("1. Mostrar Agenda\n");
        printf("2. Agregar Contacto\n");
        printf("3. Eliminar Contacto\n");
        printf("4. Modificar Contacto\n");
        printf("5. Guardar y Salir\n");
        printf("Ingrese su opción (1-5): ");
        scanf("%d", &opcion);

        // Realizar acciones según la opción seleccionada
        switch (opcion)
        {
        case 1:
            // Mostrar la agenda
            mostrarAgenda(agenda, num_contactos);
            break;
        case 2:
            // Agregar un nuevo contacto
            agregarContacto(agenda, &num_contactos);
            break;
        case 3:
            // Eliminar un contacto existente
            eliminarContacto(agenda, &num_contactos);
            break;
        case 4:
            // Modificar un contacto existente
            modificarContacto(agenda, num_contactos);
            break;
        case 5:
            // Guardar la agenda en el archivo y salir
            guardarAgendaEnArchivo(agenda, num_contactos, "agenda.dat");
            printf("Agenda guardada. Saliendo del programa.\n");
            break;
        default:
            // Mensaje en caso de opción inválida
            printf("Opción no válida. Por favor, ingrese un número del 1 al 5.\n");
        }
    } while (opcion != 5);

    return 0;
}
