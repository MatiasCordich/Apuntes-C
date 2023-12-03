#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Constantes
#define MAX_CONTACTOS 100
#define MAX_HISTORIAL 50

// Estructora
typedef struct
{
    char nombre[50];
    char password[50];
    double saldo;
    char **contactos;
    int contador_contactos;
    char historial[MAX_HISTORIAL][100];
    int contador_historial;

} Usuario;

// Prototipos de funciones

// Genericos
void menu(Usuario **usuarios, int *contador_usuarios, int *usuario_actual);
void mostrarOpciones();
int elegirOpcion();
void realizarOpcion();

// Funciones para el registro y logueo de usuarios
void registrarUsuario(Usuario **usuarios, int *contador_usuarios);
int loguearUsuario();

// Validaciones
int esUnNumero(const char *string);
int validarExistenciaNombre(Usuario *usuarios, int contador_usuarios, const char *nombre_usuario);

void depositar();
void retirarDinero();
void agregarContacto();
void transferirDinero();
void verHistorial();

// ----------------------------------- Funcion principal -----------------------------------
int main()
{
    Usuario *usuarios = NULL;
    int contador_usuarios = 0;
    int usuario_actual = -1;

    // Llama a la función del menú principal
    menu(&usuarios, &contador_usuarios, &usuario_actual);

    // Liberar memoria al salir
    for (int i = 0; i < contador_usuarios; i++)
    {
        free(usuarios[i].contactos);
    }
    free(usuarios);

    return 0;
}

// -------------------------------------------------------------------------------------------

// Funcion para mostrar las opciones del programa
void mostrarOpciones()
{
    printf("-------------------------------------------\n");
    printf("|                Bienvenidx               |\n");
    printf("-------------------------------------------\n");
    printf("-------------------------------------------------\n");
    printf("|Por favor, elija una de las siguientes opciones |\n");
    printf("--------------------------------------------------\n");
    printf("1 - REGISTRO\n");
    printf("2 - INICIAR SESION\n");
    printf("3 - INGRESAR DINERO\n");
    printf("4 - RETIRAR DINERO\n");
    printf("5 - AGREGAR CONTACTO\n");
    printf("6 - REALIZAR TRANSFERENCIA\n");
    printf("7 - VER HISTORIAL DE TRANSFERENCIAS\n");
    printf("0 - SALIR DEL SISTEMA\n");
    printf("--------------------------------------------------\n");
    printf("Opcion elegida: ");
}

// Funcion para elegir una opcion del Menu
int elegirOpcion()
{
    // Declaro mi variable inicial
    int opcion;
    int es_un_numero;

    // Ingreso al bucle de ejecucion
    do
    {
        // Llamo a la funcion para mostar las opciones
        mostrarOpciones();

        // Guardo el valor que escribo por consola
        es_un_numero = scanf("%d", &opcion);

        // Limpia el búfer de entrada para evitar problemas en futuras lecturas

        while (getchar() != '\n')
            ;

        // Evaluo el valor ingresado
        if (es_un_numero == 1)
        {
            return opcion;
        }
        else
        {

            printf("--------------------------------------------------\n");
            printf("|   ERROR: No se ha ingresado un numero valido.  |\n");
            printf("--------------------------------------------------\n");
        }
    } while (true);
}

// Implementación de la función para verificar si una cadena es numérica
int esUnNumero(const char *string)
{

    // Recorre cada carácter de la cadena y verifica si es un dígito
    for (int i = 0; string[i] != '\0'; i++)
    {

        if (!isdigit(string[i]))
        {
            return 0; // La cadena no es completamente numérica
        }
    }
    return 1; // La cadena es completamente numérica
}

// Funcion para validar si el nombre del usuario ya exsite
int validarExistenciaNombre(Usuario *usuarios, int contador_usurios, const char *nombre_usuario)
{

    // Recorre la lista de usuarios y verifica si el nombre de usuario ya está en uso

    for (int i = 0; i < contador_usurios; i++)
    {
        if (strcmp(usuarios[i].nombre, nombre_usuario) == 0)
        {
            return 1; // Si esta en uso me devuelve un 1
        }
    }
    return 0; // Si no esta en uso me devuelve un 0
}

// Funcion para registar un Usuario
void registrarUsario(Usuario **usuarios, int *contador_usuarios)
{

    // Aumenta la capacidad de usuarios si es necesario

    if (*contador_usuarios % 10 == 0)
    {
        *usuarios = realloc(*usuarios, (*contador_usuarios + 10) * sizeof(Usuario));
        if (*usuarios == NULL)
        {
            printf("Error al asignar memoria.\n");
            return;
        }
    }

    // Registro el nuevo usuario

    char username_ingesado[50];
    char clave_ingresada[50];
    int existe_usuario;

    do
    {
        // Solicita al usuario ingresar el nombre de usuario
        printf("Ingrese el nombre de usuario: ");
        scanf("%s", username_ingesado);

        // Valido si el nombre ya esta en uso
        existe_usuario = validarExistenciaNombre(*usuarios, *contador_usuarios, username_ingesado);

        // Evaluo en resultado obtenido

        // Si el nombre ya esta ocupado, lanzo un mensaje de error
        if (existe_usuario)
        {
            printf("-----------------------------------------------------------------------\n");
            printf("|   ERROR: El nombre ya se encuentra ingresado, intentelo de vuelta.  |\n");
            printf("-----------------------------------------------------------------------\n");
            return;
        }
        else
        {
            // Caso contrario guardo el nombre del usuario en la estructura
            strcpy((*usuarios)[*contador_usuarios].nombre, username_ingesado);
        }
    } while (existe_usuario);

    // Ingreso la clave
    do
    {
        // Solicita al usuario ingresar la contraseña
        printf("Ingrese una clave numerica: ");
        scanf("%s", clave_ingresada);

        // Verifico si la clave ingresada en numerica
        int esNumerica = esUnNumero(clave_ingresada);

        // Evaluo el resultado obtenido
        if (!esNumerica)
        {
            // Si la clave no es numerica lanzo un mensaje de error
            printf("-------------------------------------------------------------------------\n");
            printf("|        ERROR: La clave debe ser numerica, intentelo de vuelta.        |\n");
            printf("-------------------------------------------------------------------------\n");
        }
        else
        {
            // Si es numerica guardo la clave en el nuevo usario
            strcpy((*usuarios)[*contador_usuarios].password, clave_ingresada);
        }

    } while (!esUnNumero(clave_ingresada));

    // Inicializa el saldo del usuario y la cantidad de contactos
    (*usuarios)[*contador_usuarios].saldo = 0.0;
    (*usuarios)[*contador_usuarios].contador_contactos = 0;

    // Ajusta la capacidad de contactos
    (*usuarios)[*contador_usuarios].contactos = malloc(MAX_CONTACTOS * sizeof(char *));

    if ((*usuarios)[*contador_usuarios].contactos == NULL)
    {
        printf("Error al asignar memoria.\n");
        return;
    }

    // Inicializa los contactos con cadenas de caracteres vacios
    for (int i = 0; i < MAX_CONTACTOS; i++)
    {
        (*usuarios)[*contador_usuarios].contactos[i] = malloc(50 * sizeof(char));

        if ((*usuarios)[*contador_usuarios].contactos[i] == NULL)
        {
            printf("Error al asignar memoria.\n");
            return;
        }
        strcpy((*usuarios)[*contador_usuarios].contactos[i], "");
    }

    // Incrementa el contador de usuarios
    (*contador_usuarios)++;

    // Muestra un mensaje indicando que el usuario fue registrado con éxito
    printf("-------------------------------------------------------------------------\n");
    printf("|                     USUARIO REGISTRADO CON EXITO.                     |\n");
    printf("-------------------------------------------------------------------------\n");
}

// Funcion donde se engloba todas las funcionalidades del menu
void menu(Usuario **usuarios, int *contador_usuarios, int *usuario_actual)
{

    int opcion;

    do
    {
        opcion = elegirOpcion();

        switch (opcion)
        {
        case 1:
            registrarUsario(usuarios, contador_usuarios);
            break;
        case 2:
            printf("HAS SELECCIONADO LA OPCION 2\n");
            break;
        case 3:
            printf("HAS SELECCIONADO LA OPCION 3\n");
            break;
        case 4:
            printf("HAS SELECCIONADO LA OPCION 4\n");
            break;
        case 5:
            printf("HAS SELECCIONADO LA OPCION 5\n");
            break;
        case 6:
            printf("HAS SELECCIONADO LA OPCION 6\n");
            break;
        case 7:
            printf("HAS SELECCIONADO LA OPCION 7\n");
            break;
        default:
            printf("--------------------------------------------------\n");
            printf("| HAS SALIDO DEL PROGRAMA. QUE TENGA UN BUEN DIA. |\n");
            printf("--------------------------------------------------\n");
            break;
        }
    } while (opcion != 0);
}
