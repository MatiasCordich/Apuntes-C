// Definimos nuestro archivo .h

#ifndef AGENDA_H
#define AGENDA_H

#define MAX_CONTACTACTOS 100

// Defino mi estructura de tipo Contacto
typedef struct
{
    int id;
    char nombre[50];
    char telefono[15];
} Contacto;

// Defino las funciones del programa

void crearAgenda(Contacto agenda[], int *num_contactos, const char *nombre_archivo);
void guardarAgenda(Contacto agenda[], int *num_contactos, const char *nombre_archivo);
void mostrarAgenda(Contacto agenda[], int num_contactos);
void agregarContacto(Contacto agenda[], int *num_contactos);
void eliminarContacto(Contacto agenda[], int *num_contactos);
void modificarContacto(Contacto agenda[], int nunum_contactosmContactos);


#endif