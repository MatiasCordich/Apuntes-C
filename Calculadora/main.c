#include "calculadora.h"
#include "entrada_salida.h"

int main(int argc, char const *argv[])
{
    // Variables
    float num1;
    float num2;
    float resultado = 0;
    char operador;
    int opcion;
    int resultadoGuardado = 0;
    float ultimoResultado = 0;

    // Entro al sistema del programa 
    do
    {
        mostarMenu();
        opcion = obtenerOpcion();

        switch (opcion)
        {
        case 1:
            mostrarOpciones();
            scanf("%c", &operador);

            printf("Ingrese el primer numero: ");
            scanf("%f", &num1);

            printf("Ingrese el segundo numero: ");
            scanf("%f", &num2);

            resultado = realizarOperacion(num1, num2, operador, &resultadoGuardado, &ultimoResultado);

            if (resultadoGuardado)
            {
                mostrarResultado(resultado);
            }
            break;

        case 2:
            if (resultadoGuardado)
            {
                mostarResultado(resultado);
            }
            else
            {
                printf("NO HAY RESULTADOS ALMACENADOS.\n");
            }

            break;
        case 3:
            printf("HA SALIDO DE LA CALCULADORA.\n");
            break;

        default:
            printf("ERROR: OPCION NO VALIDA\n");
            break;
        }
    } while (opcion != 3);

    return 0;
}
