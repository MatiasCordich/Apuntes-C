#include <stdio.h>

int main(int argc, char const *argv[])
{
    // POR TECLADO SE INGRESA EL VALOR HORA DE UN EMPLEADO. POSTERIORMENTE SE INGRESA ELNOMBRE DEL EMPLEADO, LA ANTIGÜEDAD Y LA CANTIDAD DE HORAS TRABAJADAS EN EL MES. SE PIDE CALCULAR EL IMPORTE A COBRAR TENIENDO EN CUE NTA QUE AL TOTAL QUE RESULTA DE MULTIPLICAR EL VALOR HORA POR LA CANTIDAD DE HORAS TRABAJADAS, HAY QUE SUMARLE LA CANTIDAD DE AÑOS TRABAJADOS MULTIPLICADOS POR $30, Y AL TOTAL DE TODAS ESAS OPERACIONES RESTARLE EL 13% EN CONCEPTO DE DESCUENTOS. IMPRIMIR EL RECIBO CORRESPONDIENTE CON EL NOMBRE, LA ANTIGÜEDAD, EL VALOR HORA, EL TOTAL A COBRAR EN BRUTO, EL TOTAL DE DESCUENTOS Y EL VALOR NETO A COBRAR.

    // Declaro mis variables
    char respuesta;
    char nombre_empleado[50];
    int valor_hora;
    int antiguedad;
    int horas_trabajadas;
    float bruto_cobrar;
    float descuento;
    float neto_cobrar;

    // Ingreso el valor de respuesta por consola
    printf("Desea comenzar con el programa? s/n: ");
    scanf("%c", &respuesta);

    // Ejecuto el bucle mientras se cumpla la condicion
    while (respuesta == 's' || respuesta == 'S')
    {
        // Ingreso el nombre del empleado
        printf("Ingrese el nombre del empleado: ");
        scanf(" %s", nombre_empleado);

        // Ingreso la antiguedad del empleado
        printf("Ingrese la antiguedad: ");
        scanf(" %i", &antiguedad);

        // Ingreso el valor hora del empleado
        printf("Ingrese el valor hora: ");
        scanf(" %i", &valor_hora);

        // Ingreso las horas trabajadas del empleado
        printf("Ingrese las horas trabajadas en el mes: ");
        scanf(" %i", &horas_trabajadas);
        
        // Realizo los calculos que me pide el ejercicio

        // Calculo el bruto a cobrar
        bruto_cobrar = (valor_hora * horas_trabajadas) + (antiguedad * 30);

        // Calculo el descuento
        descuento = bruto_cobrar * 0.13;

        // Calculo en netro a cobrar
        neto_cobrar = bruto_cobrar - descuento;

        // Imprimo por pantalla la ficha del empleado

        printf("----- FICHA DE EMPLEADO -----\n");
        printf("NOMBRE: %s\n", nombre_empleado);
        printf("ANTIGUEDAD: %i\n", antiguedad);
        printf("VALOR HORA: %i\n", valor_hora);
        printf("TOTAL A COBRAR BRUTO: %.2f\n", bruto_cobrar);
        printf("DESCUENTO: %.2f\n", descuento);
        printf("TOTAL A COBRAR NETO: %.2f\n", neto_cobrar);
        printf("-----------------------------\n");

        // Pregunto si quiero seguir con el programa
        printf("Desea seguir con el programa?: ");
        scanf(" %c", &respuesta);
    }

    // En caso de no seguir se termina el programa
    printf("Fin del programa");

    return 0;
}
