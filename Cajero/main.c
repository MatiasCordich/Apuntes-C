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
    int id_cuenta;
    char nombre[50];
    char password[50];
    double saldo;
    char **contactos;
    int contador_contactos;
    char historial[MAX_HISTORIAL][100];
    int contador_historial;

} Usuario;

// Variable global para llevar el seguimiento del último id_cuenta asignado
int ultimo_contador_id = 0;

// Prototipos de funciones

// Genericos
void menu(Usuario **usuarios, int *contador_usuarios, int *usuario_actual);
void mostrarOpciones();
int elegirOpcion();
void realizarOpcion();

// Funciones para el registro y logueo de usuarios
void registrarUsuario(Usuario **usuarios, int *contador_usuarios);
int loguearse(Usuario *usuarios, int contador_usuarios, int *usuario_actual);

// Validaciones
int esUnNumero(const char *string);
int validarExistenciaNombre(Usuario *usuarios, int contador_usuarios, const char *nombre_usuario);

// Funciones propios del sistema bancario
void depositar(Usuario *usuario);
void retirarDinero(Usuario *usuario);
void agregarContacto(Usuario *usuario, Usuario *usuarios, int contador_usuarios);
void transferirDinero(Usuario *usuarios, int contador_usuarios, int usuario_actual);
void verHistorial(Usuario usuario);

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
            exit(EXIT_FAILURE);
        }
    }

    // Registro el nuevo usuario
    char clave_ingresada[50];
    int existe_usuario;

    (*usuarios)[*contador_usuarios].id_cuenta = ultimo_contador_id++;

    // Solicita al usuario ingresar el nombre de usuario
    printf("Ingrese el nombre de usuario: ");
    scanf("%s", (*usuarios)[*contador_usuarios].nombre);

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
        exit(EXIT_FAILURE);
    }

    // Inicializa los contactos con cadenas de caracteres vacios
    for (int i = 0; i < MAX_CONTACTOS; i++)
    {
        (*usuarios)[*contador_usuarios].contactos[i] = malloc(50 * sizeof(char));

        if ((*usuarios)[*contador_usuarios].contactos[i] == NULL)
        {
            printf("Error al asignar memoria.\n");
            exit(EXIT_FAILURE);
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

// Funcion para loguearse al cajero
int loguearse(Usuario *usuarios, int contador_usuarios, int *usuario_actual)
{
    char clave_ingresada[50];

    printf("Ingrese su clave: ");
    scanf("%s", clave_ingresada);

    // Busco el usuario en la lista
    for (int i = 0; i < contador_usuarios; i++)
    {
        if (strcmp(usuarios[i].password, clave_ingresada) == 0)
        {
            printf("Incio de sesion exitoso\n");
            *usuario_actual = i;
            return i;
        }
    }

    printf("Clave incorrecta");

    return -1;
}

// Funciones del sistema bancario

void depositar(Usuario *usuario)
{
    double monto_ingresado;

    printf("Ingrese la cantidad a depositar: ");
    scanf("%f", &monto_ingresado);

    if (monto_ingresado > 0)
    {
        usuario->saldo += monto_ingresado;
        printf("---------------------------------------------------------------\n");
        printf("| Deposito realizado con exito. Su saldo acutal es de: $ %.2f |\n", usuario->saldo);
        printf("---------------------------------------------------------------\n");
    }
    else
    {
        printf("------------------------------------\n");
        printf("| ERROR: Ingrese un saldo positivo |\n");
        printf("------------------------------------\n");
    }
}

void retirarDinero(Usuario *usuario)
{
    double monto_ingresado;

    printf("Ingrese el monto a retirar: ");
    scanf("%f", &monto_ingresado);

    if (monto_ingresado > 0 && monto_ingresado <= usuario->saldo)
    {
        usuario->saldo -= monto_ingresado;
        printf("-------------------------------------------------\n");
        printf("| Retiro exitoso. Su saldo acutal es de: $ %.2f |\n", usuario->saldo);
        printf("-------------------------------------------------\n");
    }
    else
    {
        printf("--------------------------------------\n");
        printf("| ERROR: Ingrese una cantidad valida |\n");
        printf("--------------------------------------\n");
    }
}

void agregarContacto(Usuario *usuario, Usuario *usuarios, int contador_usuarios)
{
    // Valido que el usuario no tenga la lista de usuarios llena
    if (usuario->contactos < MAX_CONTACTOS)
    {
        int id_contacto_ingresado;
        printf("Ingrese el ID de cuenta del contacto: ");
        scanf("%d", &id_contacto_ingresado);

        // Valido que el contacto exista
        int existe_contacto = -1;

        for (int i = 0; i < contador_usuarios; i++)
        {
            if (usuarios[i].id_cuenta == id_contacto_ingresado)
            {
                existe_contacto = i;
                break;
            }
        }

        if (existe_contacto != -1)
        {
            int esta_agregado = 0;
            for (int i = 0; i < usuario->contador_contactos; i++)
            {
                if (usuario->contactos[i] == usuarios[esta_agregado].nombre)
                {
                    esta_agregado = 1;
                    break;
                }
            }

            if (!esta_agregado)
            {
                strcpy(usuario->contactos[usuario->contador_contactos], usuarios[esta_agregado].nombre);
                usuario->contador_contactos++;
                printf("--------------------------------\n");
                printf("| Contacto Agregado con exito. |\n");
                printf("--------------------------------\n");
            }
            else
            {
                printf("--------------------------------------------\n");
                printf("| ERROR: El contacto ya existe en su lista. |\n");
                printf("--------------------------------------------\n");
            }
        }
        else
        {
            printf("-------------------------------------------------------------\n");
            printf("| ERROR: No se encontro el contacto con el ID especificado. |\n");
            printf("-------------------------------------------------------------\n");
        }
    }
    else
    {
        printf("---------------------------------------------------------------\n");
        printf("| ERROR: No se pueden agregar mas contacto. Limite alcanzado. |\n");
        printf("---------------------------------------------------------------\n");
    }
}


void transferirDinero(Usuario *usuarios, int contador_usuarios, int usuario_actual)
{
    char destinatario[50];
    double monto;

    printf("Ingrese el nombre del destinatario: ");
    scanf("%s", destinatario);

    int existe_destinatario = -1;

    for (int i = 0; i < usuarios[usuario_actual].contador_contactos; i++)
    {
        if (strcmp(usuarios[usuario_actual].contactos[i], destinatario))
        {
            existe_destinatario = i;
            break;
        }
    }

    if (existe_destinatario == -1)
    {
        printf("-------------------------------------\n");
        printf("| ERROR: Destinatario no encontrado |\n");
        printf("-------------------------------------\n");
        return;
    }

    printf("Ingrese la cantidad a trasferir: ");
    scanf("%f", &monto);

    if (monto > 0 && monto <= usuarios[usuario_actual].saldo)
    {
        // Disminuzco el saldo del usuario
        usuarios[usuario_actual].saldo -= monto;

        // Aumento el saldo del destinatario
        usuarios[existe_destinatario].saldo += monto;

        // Registro en el historial del usuario

        // Registro en el historial del destinatario
    }
    else
    {
        printf("-----------------------------------------------\n");
        printf("| ERROR: La cantidad a transferir es invalida |\n");
        printf("-----------------------------------------------\n");
    }
}

void verHistorial(Usuario usuario)
{
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
            *usuario_actual = loguearse(*usuarios, *contador_usuarios, usuario_actual);
            break;
        case 3:
            if (*usuario_actual != -1)
            {
                printf("HAS SELECCIONADO LA OPCION 3\n");
            }
            else
            {
                printf("ERROR: Inicie sesion primero\n");
            }
            break;
        case 4:
            if (*usuario_actual != -1)
            {
                printf("HAS SELECCIONADO LA OPCION 3\n");
            }
            else
            {
                printf("ERROR: Inicie sesion primero\n");
            }
            break;
        case 5:
            if (*usuario_actual != -1)
            {
                printf("HAS SELECCIONADO LA OPCION 3\n");
            }
            else
            {
                printf("ERROR: Inicie sesion primero\n");
            }
            break;
        case 6:
            if (*usuario_actual != -1)
            {
                printf("HAS SELECCIONADO LA OPCION 3\n");
            }
            else
            {
                printf("ERROR: Inicie sesion primero\n");
            }
            break;
        case 7:
            if (*usuario_actual != -1)
            {
                printf("HAS SELECCIONADO LA OPCION 3\n");
            }
            else
            {
                printf("ERROR: Inicie sesion primero\n");
            }
            break;
        case 0:
            printf("--------------------------------------------------\n");
            printf("| HAS SALIDO DEL PROGRAMA. QUE TENGA UN BUEN DIA. |\n");
            printf("--------------------------------------------------\n");
            break;
        default:
            printf("------------------------------------------------\n");
            printf("| ERROR: Opcion no valida. Intentelo de nuevo. |\n");
            printf("------------------------------------------------\n");
            break;
        }
    } while (opcion != 0);
}
