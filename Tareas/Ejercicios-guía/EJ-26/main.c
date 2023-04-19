#include <stdio.h>

int main(int argc, char const *argv[])
{
    // EN UNA TIENDA DE ARTÍCULOS PARA CABALLEROS AL FINAL DEL DÍA SE CARGAN EN LA COMPUTADORA LAS BOLETAS QUE CONFECCIONARON LOS DISTINTOS VENDEDORES PARA SABER CUÁNTO FUE LA COMISIÓN DEL DÍA DE CADA UNO DE ELLOS. LOS DATOS QUE SE INGRESAN (POR BOLETA) SON: EL NÚMERO DE VENDEDOR Y EL IMPORTE. CUANDO NO HAY MÁS BOLETAS PARA CARGAR SE INGRESA 0. TENIENDO EN CUENTA QUE EL EJERCICIO TIENE 3 VENDEDORES Y QUE EL PORCENTAJE SOBRE LAS VENTAS ES DEL 5%, INDICAR CUANTO GANO CADA VENDEDOR EN EL DÍA.

    // Declaro mis variables
    int i;
    int num_vendedor;
    float importe;
    float comision;
    float comision_vendedor1 = 0;
    float comision_vendedor2 = 0;
    float comision_vendedor3 = 0;

    // Hago un bucle for donde voy a repetir una instruccion 3 veces porque la cantidad de vendedores la tengo
    for (i = 1; i <= 3; i++)
    {
        // Ingreso el numero de vendedor y la guardo en la variable num_vendedor
        printf("Ingrese un numero de vendedor del 1 al 3: ");
        scanf("%i", &num_vendedor);

        // Hago un bucle do while para preguntar el importe de venta
        do
        {
            printf("Ingrese el importe de venta: ");
            scanf(" %f", &importe);

            // Calculo la comision de ese importe
            comision = importe * 0.05;

            // Evaluo en base al valor que ingrese para la variable num_vendedor
            if (num_vendedor == 1)
            {
                // Sumo las comisiones si num_vendedor es 1
                comision_vendedor1 = comision_vendedor1 + comision;
            }

            if (num_vendedor == 2)
            {
                // Sumo las comisiones si num_vendedor es 2
                comision_vendedor2 = comision_vendedor2 + comision;
            }

            if (num_vendedor == 3)
            {
                // Sumo las comisiones si num_vendedor es 3
                comision_vendedor3 = comision_vendedor3 + comision;
            }
        } while (importe != 0);

        // Al final del For pongo un mesaje de que el vendedor ya ingreso todas las boletas 
        printf("El vendedor %i ya cargo todas la boletas\n", num_vendedor);
    }

    // Imprimo por pantalla los resultados obtenidos
    printf("El vendedor 1 gano $%.2f en concepto de comisiones\n", comision_vendedor1);
    printf("El vendedor 2 gano $%.2f en concepto de comisiones\n", comision_vendedor2);
    printf("El vendedor 3 gano $%.2f en concepto de comisiones\n", comision_vendedor3);

    return 0;
}
