#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
        La empresa EDE-LUZ requiere un sistema el cual permita:

        Ingresar el consumo y si estan subsidiados 10 clientes y a partir de eso, mostrar:

        - La cantidad de subsidiados.
        - El total recaudado.
        - El minimo consumido por algun cliente.
        Precio por Kwh es $12 ( La mitad para Subcidiados)
    */

   // Variables
   char respuesta; // Determina la respuesta de si esta subisidado o no que la ingreso por teclado
   int i; // La variable i del bucle for
   int cant_subsidiados = 0; // Contador de clientes subsidiados
   int precio_consumo = 12; // Precio normal por el consumo
   int precio_subsidiado = 6; // Precio subsidiado por el consumo
   int cant_clientes = 10; // Cantidad de clientes (determinado por el enunciado)
   int monto; // El monto a pagar 
   int total_recaudado = 0; // La suma (acumulador) de todos los montos (de la variable monto)
   int consumo; // La variable consumo que ingreso un valor por teclado
   int minimo_consumido; // La variable para determinar un MINIMO para consumo. 

    // Como se la cantidad de clientes y tengo que repetirlo 10 veces utilizo un FOR
   for (i = 0; i < cant_clientes; i++)
   {
        // Ingreso un numero que va a ir a la variable CONSUMO
        printf("Ingrese el consumo del cliente: ");
        scanf("%i", &consumo);

        // Como la primera iteracion (i == 0) no hay otro valor de CONSUMO para comparar un minimo, en la primera iteracion, el consumo que ingresemos sera el MINIMO
        if (i == 0)
        {
            minimo_consumido = consumo;
        } else { // En las demas iteraciones (i == 1,2,3,4,5,6,7,8,9) ahora si voy a tener valores de la variable consumo para comparar si es o no un NUEVO MINIMO
            
            // Evaluo el valor que ingreso para la variable CONSUMO y me fijo si es menor al MINIMO 
            if (consumo < minimo_consumido)
            {
                // Si es asi, entonces reemplazamos el valor de MINIMO CONSUMIDO por el nuevo valor
                minimo_consumido = consumo;
            } 
        }

        // Ingreso una respuesta (que va a ir a guardarse a la variable RESPUESTA) para la pregunta si el cliente esta subsidiado
        printf("El cliente se encuentra subsidiado? s/n: ");
        scanf(" %c", &respuesta);

        // La pregunta de si el cliente esta subsidiado solo tiene dos escenarios posibles, un SI ('s' o 'S') o un NO ('n' o 'N')
        // Si el valor ingresado para la variable RESPUESTA es 's' o 'S', el cliente esta subsidiado, entonces hace lo siguiente
        if (respuesta == 's' || respuesta == 'S')
        {
            // Calculo el MONTO que es el CONSUMO (que ingrese por teclado) x el PRECIO SUBSIDIADO (6)
            monto = consumo * precio_subsidiado;

            // A la variable acumuladora TOTAL_RECAUDADO le sumo el MONTO
            total_recaudado = total_recaudado + monto;

            // A la variable contadora de CANT_SUBSIDIADOS lo incremento en 1
            cant_subsidiados = cant_subsidiados + 1;

        } else { // Si la respuesta es 'n' o 'N' el cliente NO esta subsidiado por lo que hago lo siguiente

            // Calculo el MONTO que es el CONSUMO (que ingrese por teclado) x PRECIO_CONSUMO (12)
            monto = consumo * precio_consumo;

             // A la variable acumuladora TOTAL_RECAUDADO tambien le sumo el MONTO
            total_recaudado = total_recaudado + monto;
        }       
   }

    // IMPRIMO POR PANTALLA LOS RESULTADOS
   printf("CANTIDAD DE SUBSIDIADOS: %i\n", cant_subsidiados);
   printf("TOTAL RECAUDADO: %i\n", total_recaudado);
   printf("MINIMO CONSUMIDO: %i\n", minimo_consumido);

    return 0;
}
