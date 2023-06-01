#include <stdio.h>
#include <math.h>

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

int main(int argc, char const *argv[])
{

    // HACER UNA CALCULADORA QUE MUESTRE LAS SIGUIENTES OPERACIONES: SUMA, RESTA, MULTIPLICACION, DIVISON, RESTO

    // Determino las variables
    double num_a;
    double num_b;
    double resultado;
    double resultados[100];
    double guardar_resultado;
    int i;
    int operacion;
    int cant_elementos = 0;
    char respuesta;
    char respuesta_2 = 'n';
    char respuesta_3;

    // Ingreso un valor para respuesta para determinar si voy a bucle o no
    printf("---------------------- CALCULADORA ----------------------\n");
    printf("Bienvenido/a, desea comenzar con la calculadora? s/n: ");
    scanf("%c", &respuesta);

    // Si respuesta es 's' o 'S' se entra al bucle
    while (respuesta == 's' || respuesta == 'S')
    {
        // Ingreso las valores de la variables por teclado
        printf("---------------------- INGRESO DE DATOS ----------------------\n");
        if (respuesta_2 == 's' || respuesta_2 == 'S')
        {
            num_a = guardar_resultado;
        }
        else
        {
            printf("Ingrese un primer numero: ");
            scanf(" %lf", &num_a);
        }

        printf("Ingrese un segundo numero: ");
        scanf(" %lf", &num_b);
        printf("---------------------- INGRESO DE OPERACIONES ----------------------\n");
        printf("SUMA : 1\n");
        printf("RESTA : 2\n");
        printf("MULTIPLICACION : 3\n");
        printf("DIVISION : 4\n");
        printf("POTENCIA : 5\n");
        printf("RAIZ CUADRADA : 6\n");
        printf("SENO : 7\n");
        printf("COSENO : 8\n");
        printf("TANGENTE : 9\n");
        printf("Ingrese la operacion que desea realizar (1,2,3,4,5,6,7,8,9): ");
        scanf(" %i", &operacion);

        // Realizo un switch para evaluar las multiples opciones que tengo
        switch (operacion)
        {

        // Si operacion es igual a 1 SUMO
        case 1:

            // Si mi respuesta_2 de seguir operando con el numero guardado es 's' o 'S' hago lo siguiente
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                // Realizo la operacion que elegi agregandole como termino el resultado guardado
                resultado = sumar(num_a, num_b);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La suma de %.1lf + %.1lf es %.1lf\n", num_a, num_b, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }
            else
            {
                // Si decido no seguir operanando con el ultimo resultado guardado entonces hago una operacion nueva
                resultado = sumar(num_a, num_b);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La suma de %.1lf + %.1lf es %.1lf\n", num_a, num_b, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }

            break;
            // Si operacion es igual a 2 RESTO
        case 2:
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                resultado = restar(num_a, num_b);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La resta de %.1lf - %.1lf es %.1lf\n", num_a, num_b, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }
            else
            {
                resultado = restar(num_a, num_b);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La resta de %.1lf - %.1lf es %.1lf\n", num_a, num_b, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }

            break;
            // Si operacion es igual a 3 MULTIPLICO
        case 3:
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                resultado = multiplicar(num_a, num_b);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La multiplicacion de %.1lf * %.1lf es %.1lf\n", num_a, num_b, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }
            else
            {
                resultado = multiplicar(num_a, num_b);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La multiplicacion de %.1lf * %.1lf es %.1lf\n", num_a, num_b, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }
            break;
            // Si operacion es igual a 4 DIVIDO
        case 4:

            // Si decido que sigo operando con el resutlado guardado tengo que hacer lo siguiente
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                // La operacion sera (guardar_resultado / (num_a / num_b))
                // Tanto num_a como num_b no pueden ser cero porque si num_b es 0 no podre hacer la operacion interna de (num_a / num_b)
                // Si num_a es 0 podre hacer la operacion interna pero me dara cero 0 y a la hora de hacer la operacion externa con gardar_resultado sera guardar_resultado / 0
                // Por lo que me dara error poque no se puede dividir por 0
                if (num_a == 0 || num_b == 0)
                {
                    printf("---------------------- RESPUESTA ----------------------\n");
                    printf("ERROR: No se puede divir por cero 0\n");
                }
                else // Caso contrario hago todas las operaciones con el ultimo resultado guardado
                {
                    resultado = dividir(num_a, num_b);
                    printf("---------------------- RESPUESTA ----------------------\n");
                    printf("La division de %.1lf / %.1lf es %.1lf\n", num_a, num_b, resultado);
                    guardar_resultado = resultado;
                    resultados[cant_elementos] = resultado;
                    cant_elementos = cant_elementos + 1;
                }
            }
            else
            {
                if (num_b == 0)
                {
                    printf("---------------------- RESPUESTA ----------------------\n");
                    printf("ERROR: No se puede divir por cero 0\n");
                }
                else
                {
                    resultado = dividir(num_a, num_b);
                    printf("---------------------- RESPUESTA ----------------------\n");
                    printf("La division de %.1lf / %.1lf es %.1lf\n", num_a, num_b, resultado);
                    guardar_resultado = resultado;
                    resultados[cant_elementos] = resultado;
                    cant_elementos = cant_elementos + 1;
                }
            }

            break;
            // Si operacion es igual a 5 POTENCIA
        case 5:
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                resultado = pow(num_a, num_b);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("%.1lf elevado a la %.1lf es %.1lf\n", num_a, num_b, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }
            else
            {
                resultado = pow(num_a, num_b);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("%.1lf elevado a la %.1lf es %.1lf\n", num_a, num_b, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }

            break;
            // Si operacion es igual a 6 RAIZ CUADRADA
        case 6:
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                resultado = sqrt(num_a);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La raiz cuadrada de %.1lf es %.1lf\n", num_a, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }
            else
            {
                resultado = sqrt(num_a);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La raiz cuadrada de %.1lf es %.1lf\n", num_a, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }

            break;
            // Si operacion es igual a 7 SENO
        case 7:
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                resultado = sin(num_a);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("El seno de %.1lf es %.1lf\n", num_a, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }
            else
            {
                resultado = sin(num_a);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("El seno de %.1lf es %.1lf\n", num_a, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }

            break;
            // Si operacion es igual a 8 COSENO
        case 8:
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                resultado = cos(num_a);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("El coseno de %.1lf es %.1lf\n", num_a, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }
            else
            {
                resultado = cos(num_a);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("El coseno de %.1lf es %.1lf\n", num_a, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }

            break;
            // Si operacion es igual a 9 TANGENTE
        case 9:
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                resultado = tan(num_a);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La tangente de %.1lf es %.1lf\n", num_a, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }
            else
            {
                resultado = tan(num_a);
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La tangente de %.1lf es %.1lf\n", num_a, resultado);
                guardar_resultado = resultado;
                resultados[cant_elementos] = resultado;
                cant_elementos = cant_elementos + 1;
            }

            break;
            // Si operacion NO es ningun ninguno de los anteriores tiro un mensaje de ERROR
        default:
            printf("---------------------- RESPUESTA ----------------------\n");
            printf("ERROR: No ingreso una operacion correcta\n");
            break;
        }

        printf("---------------------- INGRESO DE DATOS ----------------------\n");
        printf("Desea seguir utilizando la calculadora? s/n: ");
        scanf(" %c", &respuesta);

        if (respuesta == 's' || respuesta == 'S')
        {
            printf("Desea seguir operando con el resultado guardado? s/n: ");
            scanf(" %c", &respuesta_2);
        }

        printf("Desea mostrar los resultados guardados? s/n: ");
        scanf(" %c", &respuesta_3);

        if (respuesta_3 == 's' || respuesta_3 == 'S')
        {
            printf("--------- RESULTADOS ---------\n");
            for (i = 0; i < cant_elementos; i++)
            {
                printf("%.1lf\n",resultados[i]);
            }
            
        }
    }

    printf("---------------------- FIN DEL PROGRAMA ----------------------");

    return 0;
}
