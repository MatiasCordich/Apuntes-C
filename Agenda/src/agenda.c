// Creacion del archivo fuente

#include "agenda.h"
#include <stdio.h>
#include <stdlib.h>

// Funciones de la agenda

void crearAgenda(Contacto agenda[], int *num_contactos, const char *nombre_archivo)
{

    // Abro un archivo en modo de lectura binaria
    FILE *archivo = fopen(nombre_archivo, "rb");

    // Valido si el archvo se abrio correctamente
    if (archivo != NULL)
    {

        // Incializo el contador de contactos
        *num_contactos = 0;

        // Aumento el numero de contactos mientras se pueda leer un contacto desde archivo
        int puede_leer = fread(&agenda[*num_contactos], sizeof(Contacto), 1, archivo);

        while (puede_leer == 1)
        {
            (*num_contactos)++;
        }

        // Cierro el archivo despues de la lectura
        fclose(archivo);

        // Mostar mensaje que se creo la agenda
        printf("-----------------------------------\n");
        printf("|     AGENDA CREADA CON EXITO     |\n");
        printf("-----------------------------------\n");
    }
    else
    {
        printf("----------------------------------------------------------------\n");
        printf("|   NO SE PUEDO ABRIR EL ARCHIVO. SE CREARA UNA NUEVA AGENDA   |\n");
        printf("----------------------------------------------------------------\n");
    }
}

void guardarAgenda(Contacto agenda[], int *num_contactos, const char *nombre_archivo)
{

    // Abrimos el archivo en modo escritura binaria
    FILE *archivo = fopen(nombre_archivo, "wb");

    // Verifico si el arcivho se abrio correctamtne
    if (archivo != NULL)
    {
        // Escribo los contactos en el archivo
        fwrite(agenda, sizeof(Contacto), num_contactos, archivo);

        // Cierro el archivo despues de la escritura
        fclose(archivo);

        // Mostar mensaje que se guardo la agenda en el archivo
        printf("-------------------------------------\n");
        printf("|     AGENDA GUARDADA CON EXITO     |\n");
        printf("-------------------------------------\n");
    }
    else
    {
        printf("------------------------------------------------------------------\n");
        printf("|   ERROR: NO SE PUEDO ABRIR EL ARCHIVO PARA GUARDAR LA AGENDA   |\n");
        printf("------------------------------------------------------------------\n");
    }
}

void mostrarAgenda(Contacto agenda[], int num_contactos)
{

    // Verifico si hay contactos en la agenda
    if (num_contactos > 0)
    {
        // Primero creo las columnas con sus respectivos encabezados
        printf("\n%-5s%-20s%-15s\n", "ID", "Nombre", "Teléfono");

        // Itera sobre cada contacto en la agenda
        for (int i = 0; i < num_contactos; i++)
        {
            // Imprime la información del contacto
            printf("%-5d%-20s%-15s\n", agenda[i].id, agenda[i].nombre, agenda[i].telefono);
        }
    }
    else
    {
        printf("-----------------------------------------------------------\n");
        printf("|   LA AGENDA ESTA VACIA. NO HAY CONTACTOS PARA MOSTRAR   |\n");
        printf("-----------------------------------------------------------\n");
    }
}

void agregarContacto(Contacto agenda[], int *num_contactos)
{

    // Primero valido que haya espacio en la agenda

    if ((*num_contactos < MAX_CONTACTACTOS))
    {

        // Solicito el nombre
        printf("Ingreso el nombre: ");
        scanf("%s", agenda[*num_contactos - 1].nombre);

        // Solicito el telefono

        char telfono_ingresado[15];

        do
        {
            printf("Ingreso el numero de telefono: ");
            scanf("%s", telfono_ingresado);

            // Verifico si el numero esta repetido
            if (numeroRepetido(agenda, *num_contactos, telfono_ingresado))
            {
                printf("-------------------------------------------------------------\n");
                printf("| EL NUMERO ESTA EN USO. POR FAVOR, INGRESE UN NUEVO NUMERO |\n");
                printf("-------------------------------------------------------------\n");
            }
            else
            {
                strcpy(agenda[*num_contactos].telefono, telfono_ingresado);
            }

        } while (numeroRepetido(agenda, *num_contactos, telfono_ingresado));

        // Incremento el contador de contacto y le asigno un ID con el incremento
        (*num_contactos)++;

        agenda[*num_contactos - 1].id = *num_contactos;

        printf("-----------------------------------\n");
        printf("| CONTACTO AGREGADO CORECTAMENTE. |\n");
        printf("-----------------------------------\n");
    }
    else
    {
        printf("-----------------------------------------------------------\n");
        printf("| LA AGENDA ESTA LLENA. YA NO SE PUEDE INGRESAR CONTACTOS |\n");
        printf("-----------------------------------------------------------\n");
    }
}

void eliminarContacto(Contacto agenda[], int *num_contactos)
{
    // Verifico si hay contactos en la agenda
    if (*num_contactos > 0)
    {
        char nombre_contacto_a_eliminar[50];

        // Solicito el nombre del contacto a eliminar
        printf("Ingrese el nombre: ");
        scanf("%s", nombre_contacto_a_eliminar);

        // Busco el contacto en la agenda

        int existe_contacto = buscarContacto(agenda, *num_contactos, nombre_contacto_a_eliminar);

        if (existe_contacto != -1)
        {
            // Mueve los contactos restantes hacia arriba para llenar el espacio eliminado
            for (int i = existe_contacto; i < *num_contactos - 1; i++)
            {
                agenda[i] = agenda[i + 1];
            }

            // Decremento el contador
            (*num_contactos)--;

            printf("------------------------------------\n");
            printf("| CONTACTO ELIMINADO CORECTAMENTE. |\n");
            printf("------------------------------------\n");
        }
        else
        {
            printf("------------------------------------\n");
            printf("| EL CONTACTO  %s  NO EXISTE. |\n", nombre_contacto_a_eliminar);
            printf("------------------------------------\n");
        }
    }
    else
    {
        printf("---------------------------------------------------------\n");
        printf("| LA AGENDA ESTA VACIA, NO HAY CONTACTOS PARA ELIMINAR. |\n");
        printf("---------------------------------------------------------\n");
    }
}

void modificarContacto(Contacto agenda[], int num_contactos)
{
    // Verifico si hay contactos en la agenda

    if (num_contactos > 0)
    {
        char nombre_contacto_a_modificar[50];

        // Solicito el nombre del usuario a modifivar
        printf("Ingrese el nombre: ");
        scanf("%s", nombre_contacto_a_modificar);

        // Busco el contacto de la agenda
        int indice_contacto = buscarContacto(agenda, num_contactos, nombre_contacto_a_modificar);

        if (indice_contacto != -1)
        {
            // Muestro la informacion del contacto
            printf("-----------------------------------------------\n");
            printf("\nInformación actual del contacto:\n");
            printf("Nombre: %s\n", agenda[indice_contacto].nombre);
            printf("Teléfono: %s\n", agenda[indice_contacto].telefono);
            printf("-----------------------------------------------\n");

            char nuevo_telefono[50];

            // Solicito el nuevo numero de telefono
            do
            {
                printf("Ingrese el numevo numero de telefono: ");
                scanf("%s", nuevo_telefono);

                // Verifico si el numero no esta en uso
                if (numeroRepetido(agenda, num_contactos, nuevo_telefono))
                {
                    printf("-------------------------------------------------------------\n");
                    printf("| EL NUMERO ESTA EN USO. POR FAVOR, INGRESE UN NUEVO NUMERO |\n");
                    printf("-------------------------------------------------------------\n");
                }
                else
                {
                    strcpy(agenda[indice_contacto].telefono, nuevo_telefono);
                }

            } while (numeroRepetido(agenda, num_contactos, nuevo_telefono));

            printf("-------------------------------------\n");
            printf("| CONTACTO MODIFICADO CORRECTAMENTE |\n");
            printf("-------------------------------------\n");
        }
        else
        {
            printf("------------------------------------\n");
            printf("| EL CONTACTO  %s  NO EXISTE. |\n", nombre_contacto_a_modificar);
            printf("------------------------------------\n");
        }
    }
    else
    {
        printf("----------------------------------------------------------\n");
        printf("| LA AGENDA ESTA VACIA, NO HAY CONTACTOS PARA MODIFICAR. |\n");
        printf("----------------------------------------------------------\n");
    }
}

// Funciones de validacion

int numeroRepetido(const Contacto agenda[], int num_contactos, const char *telefono)
{

    // Recorro la agenda
    for (int i = 0; i < num_contactos; i++)
    {

        // Valido si el telefono del contacto de turno es igual al numeor de telefono ingresado
        if (strcmp(agenda[i].telefono, telefono) == 0)
        {
            // Si es igual devuelvo un 1
            return 1;
        }

        // Si no esta repetido devuelvo un 0
        return 0;
    }
}

int buscarContacto(const Contacto agenda[], int num_contactos, const char *nombre)
{

    // Recorro la agenda
    for (int i = 0; i < num_contactos; i++)
    {
        if (strcmp(agenda[i].nombre, nombre) == 0)
        {
            // Devuelvo el indice del contacto encontrado
            return i;
        }

        // Si el contacto no existe devuelvo -1
        return -1;
    }
}