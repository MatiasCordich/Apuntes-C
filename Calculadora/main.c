#include "operaciones.h"
#include "entrada_salida.h"

int main(int argc, char const *argv[])
{
    float num1;
    float num2;
    float resultado = 0;
    char operador;
    int opcion;
    int resultadoGuardado = 0;

    do
    {
        mostarMenu();
        opcion = obtenerOpcion();

        switch (opcion)
        {
        case 1:
            mostrarOpciones();
            switch (operador)
            {
            case '+':
                /* code */
                break;
            case '-':
                /* code */
                break;
            case '*':
                /* code */
                break;
            case '/':
                /* code */
                break;

            default:
                printf("ERROR: OPERADOR NO VALIDO.\n");
                break;
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
