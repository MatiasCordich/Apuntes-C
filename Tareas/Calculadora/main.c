#include <stdio.h>

int main(int argc, char const *argv[])
{

    // HACER UNA CALCULADORA QUE MUESTRE LAS SIGUIENTES OPERACIONES: SUMA, RESTA, MULTIPLICACION, DIVISON, RESTO

    // Determino las variables
       int num_a;
    int num_b;
    int suma;
    int resta;
    int multiplicacion;
    int division;
    int resto;
    int operacion;
    char respuesta;
    char respuesta_2 = 'n';
    int guardar_resultado;

    // Ingreso un valor para respuesta para determinar si voy a bucle o no
    printf("---------------------- CALCULADORA ----------------------\n");
    printf("Bienvenido/a, desea comenzar con la calculadora? s/n: ");
    scanf("%c", &respuesta);

    // Si respuesta es 's' o 'S' se entra al bucle
    while (respuesta == 's' || respuesta == 'S')
    {
        // Ingreso las valores de la variables por teclado
        printf("---------------------- INGRESO DE DATOS ----------------------\n");
        if(respuesta_2 == 's' || respuesta_2 == 'S'){
            num_a = guardar_resultado;
        } else {
            printf("Ingrese un primer numero: ");
            scanf(" %i", &num_a);
        }
        
        printf("Ingrese un segundo numero: ");
        scanf(" %i", &num_b);
        printf("---------------------- INGRESO DE OPERACIONES ----------------------\n");
        printf("SUMA : 1\n");
        printf("RESTA : 2\n");
        printf("MULTIPLICACION : 3\n");
        printf("DIVISION : 4\n");
        printf("RESTO : 5\n");
        printf("Ingrese la operacion que desea realizar (1,2,3,4,5): ");
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
                suma = num_a + num_b;
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La suma de %i + %i es %i\n", num_a, num_b, suma);
                guardar_resultado = suma;
            }
            else
            {
                // Si decido no seguir operanando con el ultimo resultado guardado entonces hago una operacion neuva 
                suma = num_a + num_b;
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La suma de %i + %i es %i\n", num_a, num_b, suma);
                guardar_resultado = suma;
            }

            break;
            // Si operacion es igual a 2 RESTO
        case 2:
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                resta = num_a - num_b;
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La resta de %i - %i es %i\n", num_a, num_b, resta);
                guardar_resultado = resta;
            }
            else
            {
                resta = num_a - num_b;
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La resta de %i - %i es %i\n", num_a, num_b, resta);
                guardar_resultado = resta;
            }

            break;
            // Si operacion es igual a 3 MULTIPLICO
        case 3:
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                multiplicacion = num_a * num_b;
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La multiplicacion de %i * %i es %i\n", num_a, num_b, multiplicacion);
                guardar_resultado = multiplicacion;
            }
            else
            {
                multiplicacion = num_a * num_b;
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("La multiplicacion de %i * %i es %i\n", num_a, num_b, multiplicacion);
                guardar_resultado = multiplicacion;
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
                    division = num_a / num_b;
                    printf("---------------------- RESPUESTA ----------------------\n");
                    printf("La division de de %i / %i es %i \n", num_a, num_b, division);
                    guardar_resultado = division;
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
                    division = num_a / num_b;
                    printf("---------------------- RESPUESTA ----------------------\n");
                    printf("La division de de %i / %i es %i \n", num_a, num_b, division);
                    guardar_resultado = division;
                }
            }

            break;
            // Si operacion es igual a 5 MODULO
        case 5:
            if (respuesta_2 == 's' || respuesta_2 == 'S')
            {
                resto = num_a % num_b;
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("El resto de %i y %i es %i\n",num_a, num_b, resto);
                guardar_resultado = resto;
            }
            else
            {
                resto = num_a % num_b;
                printf("---------------------- RESPUESTA ----------------------\n");
                printf("El resto entre %i y %i es %i\n", num_a, num_b, resto);
                guardar_resultado = resto;
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
    }

    printf("---------------------- FIN DEL PROGRAMA ----------------------");

    return 0;
}
