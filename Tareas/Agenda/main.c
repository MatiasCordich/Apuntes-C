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

// Estructura para la fecha de nacimiento de la persona 
typedef struct
{
    int dia;
    int mes;
    int anio;
} s_fecha;

// Estructura de los datos que debe tener la persona en la agenda
typedef struct
{
    char nombre;
    char apellido;
    int dni;
    int telefono;
    s_fecha cumpleanios;
} s_persona;

// La Funcion nos devuelve el indice donde esta el dni o -1 si no existe
int buscar_dni(s_persona personas[], int tamanio, int dni)
{
    int indice_buscado = -1;
    int i;
    for (i = 0; i < tamanio; i++)
    {
        if (personas[i].dni == dni)
        {
            indice_buscado = i;
            break;
        }
    }
    return indice_buscado;
}

// Esta es la funcion que sirve para construir la persona
s_persona construir_persona(char nombre, char apellido, int dni, int telefono, s_fecha cumpleanios)
{

    s_persona persona_nueva;

    persona_nueva.nombre = nombre;
    persona_nueva.apellido = apellido;
    persona_nueva.dni = dni;
    persona_nueva.telefono = telefono;
    persona_nueva.cumpleanios = cumpleanios;

    return persona_nueva;
}

// La funcion pide los datos y tiene como salida una persona 
s_persona ingresar_persona()
{

    char nombre;
    char apellido;
    int dni;
    int telefono;
    s_fecha cumpleanios;

    printf("---------------------- INGRESO DE DATOS ----------------------\n");
    printf("---------------------- NOMBRE ----------------------\n");
    printf("Por favor, ingrese la inicial de su nombre: ");
    scanf(" %c", &nombre);
    printf("---------------------- APELLIDO ----------------------\n");
    printf("Por favor, ingrese la inicial de su apellido: ");
    scanf(" %c", &apellido);
    printf("---------------------- DNI ----------------------\n");
    printf("Por favor, el DNI (unico): ");
    scanf(" %d", &dni);
    printf("---------------------- TELEFONO ----------------------\n");
    printf("Por favor, ingrese un telefono: ");
    scanf(" %d", &telefono);
    printf("---------------------- CUMPLEANIOS ----------------------\n");
    printf("Por favor, ingrese el dia: ");
    scanf(" %i", &cumpleanios.dia);
    printf("Por favor, ingrese el mes: ");
    scanf(" %i", &cumpleanios.mes);
    printf("Por favor, ingrese el anio: ");
    scanf(" %i", &cumpleanios.anio);
    printf("--------------------------------------------------------------\n");

    return construir_persona(nombre, apellido, dni, telefono, cumpleanios);
}

// La funcion pide el arreglo y el tamanio y muestra los contactos
void mostrar_contactos(s_persona personas[], int tamanio)
{
    int i;
    printf("------------------ Lista de Contactos : ---------------------- \n");
    for (i = 0; i < tamanio; i++)
    {
        printf("Posicion %i : Nombre %c \n", i, personas[i].nombre);
        printf("------------------------------------------ \n");
    }
}

// void mostrar_persona ()

// Muestra la informacion de las personas que nacieron en un anio en especifico 
void mostrar_nacidos_en_anio (s_persona personas[], int tamanio, int anio)
{
    int i;

    printf("------------------ Lista de Contactos nacidos en %i ----------------------\n", anio);

    for (i = 0; i < tamanio; i++)
    {
        if (personas[i].cumpleanios.anio == anio)
        {
            printf("--------------------\n");
            printf("NOMBRE: %c\n", personas[i].nombre);
            printf("APELLIDO: %c\n", personas[i].apellido);
            printf("DNI: %i\n", personas[i].dni);
            printf("TELEFONO: %i\n", personas[i].telefono);
        }
    }
    

} 

// int mas_joven () //deberia devolver la posicion del mas joven

// Menu para preguntar si queremos seguir utlizando el programa
char menu_salir()
{
    char respuesta;
    printf("---------------------- AGENDA ----------------------\n");
    printf("Desea seguir con el programa? s/n: ");
    scanf(" %c", &respuesta);
    printf("---------------------------------------------------------\n");

    return respuesta;
}

int main(int argc, char const *argv[])
{
    char respuesta_1;
    s_persona persona;
    s_persona personas[100];

    // Ingreso un valor para respuesta para determinar si voy a bucle o no
    printf("---------------------- AGENDA ----------------------\n");
    printf("Bienvenido/a a la agenda, desea comenzar con el programa? s/n: ");
    scanf("%c", &respuesta_1);
    printf("---------------------------------------------------------\n");

    while (respuesta_1 == 's' || respuesta_1 == 'S')
    {   
        // Menu para ingresar los datos y crear una persona para la agenda

        persona = ingresar_persona();

        // Guardo la persona vector personas

        // Menu para verificar si seguimos utilizando la agenda 
        respuesta_1 = menu_salir();
    }

    printf("---------------------- FIN DE PROGRAMA ----------------------\n");

    return 0;
}
