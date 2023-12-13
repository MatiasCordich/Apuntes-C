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
int ultimo_contador_id = 1;

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

    // Le asigno un numero de id
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

    // Mostrar los datos del usuario registrado
    printf("-------------------------------------------------------------------------\n");
    printf("                     Datos del usuario registrado\n");
    printf("-------------------------------------------------------------------------\n");
    printf("ID CUENTA: %d\n", (*usuarios)[*contador_usuarios - 1].id_cuenta);
    printf("NOMBRE: %s\n", (*usuarios)[*contador_usuarios - 1].nombre);
    printf("SALDO: %.2f\n", (*usuarios)[*contador_usuarios - 1].saldo);
    printf("-------------------------------------------------------------------------\n");
}

// Funcion para loguearse al cajero
int loguearse(Usuario *usuarios, int contador_usuarios, int *usuario_actual)
{
    int id_ingresado;

    printf("Ingrese su ID de usuario: ");
    scanf("%d", &id_ingresado);

    // Busco el usuario en la lista por su ID

    int usuario_encontrado = -1;

    for (int i = 0; i < contador_usuarios; i++)
    {
        if (usuarios[i].id_cuenta == id_ingresado)
        {
            usuario_encontrado = i;
            break;
        }
    }

    // Valido si el usuario se encontro o no
    if (usuario_encontrado != -1)
    {

        // Si existe ingreso su clave
        char clave_ingresada[50];

        printf("Ingrese su clave numerica: ");
        scanf("%s", clave_ingresada);

        // Valido si la clave es correcta
        if (strcmp(usuarios[usuario_encontrado].password, clave_ingresada) == 0)
        {
            printf("----------------------------------------------\n");
            printf("|          INICIO DE SESION EXITOSO          |\n");
            printf("----------------------------------------------\n");
            printf(" Bienvenido, %s.\n", usuarios[usuario_encontrado].nombre);
            printf("-----------------------------------------------\n");

            *usuario_actual = usuario_encontrado;

            // Si es correcta devuelvo el usario encontrado
            return usuario_encontrado;
        }
        else
        {
            printf("--------------------------------------------------\n");
            printf("|   ERROR: Clave incorecta, intente nuevamente.  |\n");
            printf("--------------------------------------------------\n");
        }
    }
    else
    {
        printf("-------------------------------------------------------\n");
        printf("|   ERROR: Usuario no encontrado. Registrese primero  |\n");
        printf("-------------------------------------------------------\n");
    }

    return -1;
}

// Funciones del sistema bancario

void depositar(Usuario *usuario)
{
    double monto_ingresado;

    // Ingreso la cantidad a depositar
    printf("Ingrese la cantidad a depositar: ");
    scanf("%lf", &monto_ingresado);

    // Valido que el monto a depositar sea un numero positivo
    if (monto_ingresado > 0)
    {
        // Aumento el saldo del usuario y muestro el nuevo saldo
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

    // Ingreso el monto a retirar
    printf("Ingrese el monto a retirar: ");
    scanf("%lf", &monto_ingresado);

    // Valido que el monto ingresado sea positivo y que no supere al saldo del usuario
    if (monto_ingresado > 0 && monto_ingresado <= usuario->saldo)
    {
        // Disminuyo el saldo del usuario y muestro el saldo del usuario
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
    if (usuario->contador_contactos < MAX_CONTACTOS)
    {
        // Ingreso el ID del usuario a agregar como contacto
        int id_contacto_ingresado;
        printf("Ingrese el ID de cuenta del contacto: ");
        scanf("%d", &id_contacto_ingresado);

        // Valido que el contacto a ingresar exista en la lista de usuarios
        int existe_contacto = -1;

        for (int i = 0; i < contador_usuarios; i++)
        {
            if (usuarios[i].id_cuenta == id_contacto_ingresado)
            {
                existe_contacto = i;
                break;
            }
        }

        // Si existe sigo con las validaciones
        if (existe_contacto != -1)
        {
            // Valido si el contacto a agregar ya esta agregado
            int esta_agregado = 0;

            // Valido mediante el contador de contactos del usuario
            for (int i = 0; i < usuario->contador_contactos; i++)
            {
                if (strcmp(usuario->contactos[i], usuarios[existe_contacto].nombre) == 0)
                {
                    esta_agregado = 1;
                    break;
                }
            }

            // Agregar el contacto si no esta en la lista del usuario

            if (!esta_agregado)
            {
                // Copiar el nombre de usuario del contacto a la lista de contactos
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
    int id_destinatario;
    double monto;

    printf("Ingrese el ID del destinatario: ");
    scanf("%d", &id_destinatario);

    // Busco el usuario por su ID de cuenta

    int existe_destinatario = -1;

    for (int i = 0; i < contador_usuarios; i++)
    {
        if (usuarios[i].id_cuenta == id_destinatario)
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
    scanf("%lf", &monto);

    if (monto > 0 && monto <= usuarios[usuario_actual].saldo)
    {
        // Disminuzco el saldo del usuario
        usuarios[usuario_actual].saldo -= monto;

        // Aumento el saldo del destinatario
        usuarios[existe_destinatario].saldo += monto;

        // Registro la transferencia en el historial del usuario que hace la transferencia
        sprintf(usuarios[usuario_actual].historial[usuarios[usuario_actual].contador_historial],
                "Transferencia de %.2f a %s", monto, usuarios[existe_destinatario].nombre);

        // Registra la transferencia en el historial del destinatario
        sprintf(usuarios[existe_destinatario].historial[usuarios[existe_destinatario].contador_historial],
                "Transferencia de %.2f recibida de %s", monto, usuarios[usuario_actual].nombre);

        // Aumento el historial del destinatario
        usuarios[existe_destinatario].contador_historial++;

        printf("Transferencia exitosa. Nuevo saldo: $ %.2f\n", usuarios[usuario_actual].saldo);
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
    printf("---------------------------------------------------------------\n");
    printf("Historial de transferencias para el usuario %s:\n", usuario.nombre);
    printf("---------------------------------------------------------------\n");

    if (usuario.contador_historial == 0)
    {
        printf("---------------------------------------------------\n");
        printf("| No hay transferencias realizadas por el momento |\n");
        printf("---------------------------------------------------\n");
        return;
    }

    for (int i = 0; i < usuario.contador_historial; i++)
    {
        printf("%d. %s\n", i + 1, usuario.historial[i]);
    }
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
            // De la opcion 3 en adelante debe tener un usuario
            if (*usuario_actual != -1)
            {
                depositar(&(*usuarios)[*usuario_actual]);
            }
            else
            {
                printf("ERROR: Inicie sesion primero\n");
            }
            break;
        case 4:
            if (*usuario_actual != -1)
            {
                retirarDinero(&(*usuarios)[*usuario_actual]);
            }
            else
            {
                printf("ERROR: Inicie sesion primero\n");
            }
            break;
        case 5:
            if (*usuario_actual != -1)
            {
                agregarContacto(&(*usuarios)[*usuario_actual], *usuarios, *contador_usuarios);
            }
            else
            {
                printf("ERROR: Inicie sesion primero\n");
            }
            break;
        case 6:
            if (*usuario_actual != -1)
            {
                transferirDinero(*usuarios, *contador_usuarios, *usuario_actual);
            }
            else
            {
                printf("ERROR: Inicie sesion primero\n");
            }
            break;
        case 7:
            if (*usuario_actual != -1)
            {
                verHistorial((*usuarios)[*usuario_actual]);
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
