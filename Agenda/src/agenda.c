// Creacion del archivo fuente

#include "agenda.h"
#include <stdio.h>
#include <stdlib.h>

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
    } else {
        printf("----------------------------------------------------------------\n");
        printf("|   NO SE PUEDO ABRIR EL ARCHIVO. SE CREARA UNA NUEVA AGENDA   |\n");
        printf("----------------------------------------------------------------\n");
    }
}