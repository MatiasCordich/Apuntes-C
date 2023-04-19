#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DISEÑAR EN PSEUDOCODIGO Y CODIFICAR EN C UN ALGORITMO QUE PERMITA REGISTRAR DE LOS EMPLEADOS DE UNA FÁBRICA (NO SE SABE CUÁNTOS) SU PESO Y SABER CUÁNTOS PESAN HASTA 80 KG. INCLUSIVE Y CUÁNTOS PESAN MÁS DE 80 KG.

    // Declaro mis variables
    int cant_empleados = 0;
    char respuesta;
    float peso_empleado;
    int cant_empleados_peso_hasta_80 = 0;
    int cant_empleados_peso_mas_80 = 0;

    // Ingreso un valor a la variable respuesta
    printf("Desea comenzar con el programa? s/n: ");
    scanf("%c", &respuesta);

    // Mientras el valor de respuesta sea 's' o 'S' se hace el bucle
    while (respuesta == 's' || respuesta == 'S')
    {
        // Ingreso un valor numero a la variable peso de empleado
        printf("Ingrese el peso de un empleado: ");
        scanf(" %f", &peso_empleado);

        // Si el valor de peso_empleado es menor o igual 80
        if (peso_empleado <= 80)
        {
            // Aumenta el contador
            cant_empleados_peso_hasta_80 = cant_empleados_peso_hasta_80 + 1;
        }

        // Si el valor de peso_empleado es mayor 80
        if (peso_empleado > 80)
        {
            // Aumenta el contador
            cant_empleados_peso_mas_80 = cant_empleados_peso_mas_80 + 1;
        }

        // Aumenta la cantidad de empleados por cada iteracion del bucle
        cant_empleados = cant_empleados + 1;

        // Pido el valor de respuesta por consola
        printf("Desea seguir con la operacion? s/n: ");
        scanf(" %c", &respuesta);
    }

    // Imprimo los resultados una vez salido del bucle
    printf("La cantidad de empleados registrados son %i\n", cant_empleados);
    printf("De los %i empleados resgistrados, %i pesan hasta 80 kilos\n", cant_empleados, cant_empleados_peso_hasta_80);
     printf("De los %i empleados resgistrados, %i pesan mas 80 kilos\n", cant_empleados, cant_empleados_peso_mas_80);
    printf("Fin del programa");

    return 0;
}
