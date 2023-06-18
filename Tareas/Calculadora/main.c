/*
-------- TRABAJADO INTEGRADOR FINAL --------
Fecha 18/06/2023
Autores:
        Alvarez, Alan
        Buggenthin, Nicolas
        Olivera, Abril
        Sio Cordich, Matias
        Tassara Franco, Santino
----------------------------------
Universidad Nacional de Lomas de Zamora
----------------------------------
-------- CALCULADORA --------
Objetivo:
    Realizar un programa el cual cumpla las funcionalidades de una calculadora

Requisitos:
    1- Se debe permitir sumar, restar, dividir, multiplicar, realizar potencia, realizar raiz cuadrada y realizar funcionalidades trigonométricas (seno, coseno y tangente).
    2- El usuario debe poder realizar operaciones repetitivamente hasta que el mismo lo decida, por medio de alguna señal.
    3- Luego de realizar una operación, deberá permitir al usuario elegir si se seguirá operando con el valor anterior, o empezar de cero.
    4- Debe existir una operación para ver un listado de todas las operaciones realizados con su resultado. (Max 100, ordenadas de la más reciente a la más vieja).
*/

#include <stdio.h>
#include <math.h>

// Funciones para realizar las operacion aritmeticas básicas
double sumar(double num1, double num2)
{
    double resultado;
    resultado = num1 + num2;
    return resultado;
}

double restar(double num1, double num2)
{
    double resultado;
    resultado = num1 - num2;
    return resultado;
}

double multiplicar(double num1, double num2)
{
    double resultado;
    resultado = num1 * num2;
    return resultado;
}

double dividir(double num1, double num2)
{
    double resultado;
    resultado = num1 / num2;
    return resultado;
}

// Menu de opciones al ingreso
int opciones_menu()
{

    int opcion;

    // Menú de operaciones
    printf("------------------------- MENU --------------------------\n");
    printf("SUMA : 1\n");
    printf("RESTA : 2\n");
    printf("MULTIPLICACION : 3\n");
    printf("DIVISION : 4\n");
    printf("POTENCIA : 5\n");
    printf("RAIZ CUADRADA : 6\n");
    printf("SENO : 7\n");
    printf("COSENO : 8\n");
    printf("TANGENTE : 9\n");
    printf("-----------------------------------------------------------------\n");

    // Ingreso un numero para poder determinar que operacion realizar que se guardara en la variable operacion
    printf("Ingrese la operacion que desea realizar (1,2,3,4,5,6,7,8,9): ");
    scanf(" %d", &opcion);

    return opcion;
}

// Menu para preguntar si queremos seguir utilizando el programa
char menu_salir()
{
    char respuesta;
    printf("---------------------- CALCULADORA ----------------------\n");
    printf("Desea seguir utilizando la calculadora? s/n: ");
    scanf(" %c", &respuesta);
    return respuesta;
}

// Menu para preguntar si queremos seguir operando con el ultimo resultado
char menu_seguir_operando()
{
    char respuesta;
    printf("---------------------- CALCULADORA ----------------------\n");
    printf("Desea seguir utilizando seguir operando con el ultimo resultado? s/n: ");
    scanf(" %c", &respuesta);
    return respuesta;
}

// Menu para preguntar si queremos mostrar los resultados de la calculadora
char menu_mostrar_resultados()
{
    char respuesta;
    printf("---------------------- CALCULADORA ----------------------\n");
    printf("Desea mostrar los resultados guardados? s/n: ");
    scanf(" %c", &respuesta);
    return respuesta;
}

// Función principal del programa
int main(int argc, char const *argv[])
{

    // Defino mis variables
    double resultados[100]; // Representa un vector de resultados guardados por las operaciones realizadas
    double valor_1;         // Representa el primer valor de la operacion
    double valor_2;         // Representa el segundo valor de la operacion
    double resultado;       // Representa resultado de la operacion
    int i;                  // Representa el numero de iteraciones para poder recorrer el vector resultados
    int cant_elementos = 0; // Representa la cantidad de elementos que va a poseer el vector resultados (vector parcial)
    int cont_salida = 1;    // Representa un contador de salida
    int opcion;             // Representa la opcion que elegimos en nuestro menu
    char respuesta_1;       // Representa la respuesta de si desea comenzar con el programa
    char respuesta_2;       // Representa la respuesta de si desea seguir operando con el ultimo resultado
    char respuesta_3;       // Representa la respuesta de si desea mostrar todos los resultados hechos

    // Ingreso un valor para respuesta para determinar si voy a bucle o no
    printf("---------------------- CALCULADORA ----------------------\n");
    printf("Bienvenido/a a la calculadora, desea comenzar con el programa? s/n: ");
    scanf("%c", &respuesta_1);
    printf("---------------------------------------------------------\n");

    // Si respuesta_1 es 's' o 'S' se entra al bucle
    while (respuesta_1 == 's' || respuesta_1 == 'S')
    {
        // Procedimiento donde pedimos la opcion y, segun el caso, nos enviara a cada opcion del case (opciones del menu)

        opcion = opciones_menu();
        // Realizo un switch para evaluar las mpltiples opciones que tengo
        switch (opcion)
        {
        case 1: // Si operacion es igual a 1 SUMO

            printf("---------------------- INGRESO DE DATOS ----------------------\n");
            // Me toma primero la variable cont_salida que es 1, despues me tomará la condicion del valor de respuesta_2 si debo ingresar o no un valor para valor_1
            if (cont_salida == 1 || respuesta_2 == 'n' || respuesta_2 == 'n')
            {
                // Ingreso un valor para valor_1
                printf("Ingrese el primer numero: ");
                scanf(" %lf", &valor_1);
            }

            // Ingreso un valor para valor_2
            printf("Ingrese el segundo numero: ");
            scanf(" %lf", &valor_2);

            // Realizo la operacion llmando la funcion sumar() en base a los valores de valor_1 y valor_2 y el resultado se guarda en la variable resultado
            resultado = sumar(valor_1, valor_2);

            // Muestro el resultado por pantalla
            printf("---------------------- RESPUESTA ----------------------\n");
            printf("La suma de %.2lf + %.2lf es %.2lf\n", valor_1, valor_2, resultado);

            // Guardo ese resultado en el vector de resultados trabajando de manera parcial con el vector
            resultados[cant_elementos] = resultado;
            cant_elementos = cant_elementos + 1;

            break;

        case 2: // Si operacion es igual a 2 RESTO
            printf("---------------------- INGRESO DE DATOS ----------------------\n");
            if (cont_salida == 1 || respuesta_2 == 'n' || respuesta_2 == 'N')
            {
                printf("Ingrese el primer numero: ");
                scanf(" %lf", &valor_1);
            }

            printf("Ingrese el segundo numero: ");
            scanf(" %lf", &valor_2);

            // Realizo la operacion llmando la funcion restar() en base a los valores de valor_1 y valor_2 y el resultado se guarda en la variable resultado
            resultado = restar(valor_1, valor_2);

            printf("---------------------- RESPUESTA ----------------------\n");
            printf("La resta de %.2lf - %.2lf es %.2lf\n", valor_1, valor_2, resultado);

            resultados[cant_elementos] = resultado;
            cant_elementos = cant_elementos + 1;

            break;

        case 3: // Si operacion es igual a 3 MULTIPLICO
            printf("---------------------- INGRESO DE DATOS ----------------------\n");
            if (cont_salida == 1 || respuesta_2 == 'n' || respuesta_2 == 'N')
            {
                printf("Ingrese el primer numero: ");
                scanf(" %lf", &valor_1);
            }

            printf("Ingrese el segundo numero: ");
            scanf(" %lf", &valor_2);
            // Realizo la operacion llmando la funcion multiplicar() en base a los valores de valor_1 y valor_2 y el resultado se guarda en la variable resultado
            resultado = multiplicar(valor_1, valor_2);

            printf("---------------------- RESPUESTA ----------------------\n");
            printf("El producto de %.2lf x %.2lf es %.2lf\n", valor_1, valor_2, resultado);

            resultados[cant_elementos] = resultado;
            cant_elementos = cant_elementos + 1;
            break;

        case 4: // Si operacion es igual a 4 DIVIDO
            printf("---------------------- INGRESO DE DATOS ----------------------\n");

            if (cont_salida == 1 || respuesta_2 == 'n' || respuesta_2 == 'N')
            {
                printf("Ingrese el primer numero: ");
                scanf(" %lf", &valor_1);
            }

            printf("Ingrese el segundo numero: ");
            scanf(" %lf", &valor_2);

            // Verifico si el segundo valor, valor_2, no es cero porque no se puede dividir por 0
            if (valor_2 == 0)
            {
                printf("ERROR!!!! NO SE PUEDE DIVIDIR POR 0\n");
            }
            else // Si no es cero entonces procedo con la operación
            {
                // Realizo la operacion llmando la funcion dividir() en base a los valores de valor_1 y valor_2 y el resultado se guarda en la variable resultado
                resultado = dividir(valor_1, valor_2);

                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La division de %.2lf / %.2lf es %.2lf\n", valor_1, valor_2, resultado);

                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }

            break;

        case 5: // Si operacion es igual a 5 POTENCIA
            printf("---------------------- INGRESO DE DATOS ----------------------\n");
            if (cont_salida == 1 || respuesta_2 == 'n' || respuesta_2 == 'N')
            {
                printf("Ingrese el primer numero: ");
                scanf(" %lf", &valor_1);
            }

            printf("Ingrese el segundo numero: ");
            scanf(" %lf", &valor_2);

            // Realizo la operacion utilizando la funcion pow(), de la libreria math.h, en base a los valores de valor_1 y valor_2 y el resultado se guarda en la variable resultado
            resultado = pow(valor_1, valor_2);

            printf("---------------------- RESPUESTA ----------------------\n");
            printf("La potencia de %.2lf elevando a %.2lf es %.2lf\n", valor_1, valor_2, resultado);

            resultados[cant_elementos] = resultado;
            cant_elementos = cant_elementos + 1;

            break;

        case 6: // Si operacion es igual a 6 RAIZ CUADRADA
            printf("---------------------- INGRESO DE DATOS ----------------------\n");
            if (cont_salida == 1 || respuesta_2 == 'n' || respuesta_2 == 'N')
            {
                printf("Ingrese un numero para realizar su raiz cuadrada: ");
                scanf(" %lf", &valor_1);
            }

            // Si valor_1 es menor a cero (negativo) lanzo un mensaje de error que no se puede sacar raíz cuadra de un numero
            if (valor_1 < 0)
            {
                printf("ERROR!!! NO SE PUEDE INGRESAR UN NUMERO MENOR A 0 PARA RAIZ CUADRADA\n");
            }
            else // Caso contrario procedo con la operacion
            {
                // Realizo la operacion utilizando la funcion sqrt(), de la libreria math.h, en base al valor de valor_1 y el resultado se guarda en la variable resultado
                resultado = sqrt(valor_1);

                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La raiz cuadrada de %.2lf es %.2lf\n", valor_1, resultado);

                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }

            break;

        case 7: // Si operacion es igual a 7 SENO
            printf("---------------------- INGRESO DE DATOS ----------------------\n");
            if (cont_salida == 1 || respuesta_2 == 'n' || respuesta_2 == 'N')
            {
                printf("Ingrese un numero para realizar el seno: ");
                scanf(" %lf", &valor_1);
            }

            // Realizo la operacion utilizando la funcion sin(), de la libreria math.h, en base al valor de valor_1 y el resultado se guarda en la variable resultado
            resultado = sin(valor_1);

            printf("---------------------- RESPUESTA ----------------------\n");
            printf("El seno de %.2lf es %.2lf\n", valor_1, resultado);

            resultados[cant_elementos] = resultado;
            cant_elementos = cant_elementos + 1;

            break;

        case 8: // Si operacion es igual a 8 COSENO
            printf("---------------------- INGRESO DE DATOS ----------------------\n");
            if (cont_salida == 1 || respuesta_2 == 'n' || respuesta_2 == 'N')
            {
                printf("Ingrese un numero para realizar el coseno: ");
                scanf(" %lf", &valor_1);
            }

            // Realizo la operacion utilizando la funcion cos(), de la libreria math.h, en base al valor de valor_1 y el resultado se guarda en la variable resultado
            resultado = cos(valor_1);

            printf("---------------------- RESPUESTA ----------------------\n");
            printf("El coseno de %.2lf es %.2lf\n", valor_1, resultado);

            resultados[cant_elementos] = resultado;
            cant_elementos = cant_elementos + 1;

            break;

        case 9: // Si operacion es igual a 9 TANGENTE
            printf("---------------------- INGRESO DE DATOS ----------------------\n");
            if (cont_salida == 1 || respuesta_2 == 'n' || respuesta_2 == 'N')
            {
                printf("Ingrese un numero para realizar la tangente: ");
                scanf(" %lf", &valor_1);
            }

            // Realizo la operacion utilizando la funcion tan(), de la libreria math.h, en base al valor de valor_1 y el resultado se guarda en la variable resultado
            resultado = tan(valor_1);

            printf("---------------------- RESPUESTA ----------------------\n");
            printf("La tangente de %.2lf es %.2lf\n", valor_1, resultado);

            resultados[cant_elementos] = resultado;
            cant_elementos = cant_elementos + 1;

            break;

        default: // Si operacion NO es ningun ninguno de los anteriores tiro un mensaje de ERROR
            printf("---------------------- RESPUESTA ----------------------\n");
            printf("ERROR: No ingreso una operacion correcta\n");
            break;
        }

        // Primero pregunto si deseo seguir utilizando el programa y el valor se guarda en respuesta_1

        respuesta_1 = menu_salir();

        // Si respuesta_1 es 's' o "S"
        if (respuesta_1 == 's' || respuesta_1 == 'S')
        {
            // Pregunto si deseo seguir operando con el utlimo resultado
            respuesta_2 = menu_seguir_operando();

            // Si respuesta_2 es 's' o 'S' valor_1 tomara el valor de la variable resultado
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                valor_1 = resultado;
            }

            // A parte el valor de respuesta_2 servira para determinar si tengo que ingresar o no un valor para valor_1 cuando tenga que hacer otra operacion
        }

        // Pregunto si deseo mostrar los resultados guardados
        respuesta_3 = menu_mostrar_resultados();
        // Si respuesta_3 es 's' o 'S'
        if (respuesta_3 == 's' || respuesta_3 == 'S')
        {
            printf("--------- RESULTADOS ---------\n");
            for (i = 0; i < cant_elementos; i++)
            {
                printf("%.1lf\n", resultados[i]);
            }
        }

        cont_salida = cont_salida + 1;
    }

    printf("---------------------- FIN DEL PROGRAMA ----------------------");

    return 0;
}