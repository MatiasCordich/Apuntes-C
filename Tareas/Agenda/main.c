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
    4- Se deberá poder mostrar quién es la persona más joven del lsitado 
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
}s_fecha;


typedef struct
{
    char nombre;
    char apellido;
    int dni;
    int telefono;
    s_fecha cumpleanios;
}s_persona;


int main(int argc, char const *argv[])
{
    
    return 0;
}
