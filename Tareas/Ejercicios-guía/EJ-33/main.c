#include <stdio.h>

int main(int argc, char const *argv[])
{
    // SE INGRESA POR TECLADO LA CANTIDAD DE AGUA CAÍDA, EN MILÍMETROS DÍA A DÍA DURANTE UN MES. SE PIDE DETERMINAR EL DÍA DE MAYOR LLUVIA, EL DE MENOR Y EL PROMEDIO. 

    // Declaro mis variables

    int i;
    int milimetros;
    int cont_milimetros = 0;
    float promedio;
    int dia_mayor_caido = 0;
    int dia_menor_caido = 0;
    int max_caido;
    int min_caido;

    // Ingerso un For que se repetrira 30 veces

    for (i = 1; i <= 30; i++)
    {   
        // Este print solamente es para indiciar en que dia estamos
        printf("Dia %i\n", i);

        // Ingresamos la cantidad de milimetros llovidos
        printf("Ingrese la cantidad de milimetros llovidos: ");
        scanf("%i", &milimetros);

        // Para guardar maximos y minimos debo hacer lo sigiente

        // La primera iteracion empieza con i = 1, como solo tengo un valor ingresado de la variable milimetros y no puedo comparar con otros, ese primer valor ingresado sera el maximo y el minimo. 
        if(i == 1){
            max_caido = milimetros;
            min_caido = milimetros;
            dia_mayor_caido = i;
            dia_menor_caido = i;
        } else {

            // El resto de las iteraciones i va a valer distinto de 1 y aca si empiezo a comparar lo que ingreso por teclado contra el valor que contiene tanto la variable max_caido como con min_caido contra el valor ingreaso para la variable miliemtros

            if(milimetros > max_caido){

                // Si el valor ingresado de milimetros es mayor al valor guardado en max_caido hay un nuevo maximo, guardo ese nuevo valor a la vairable max_caido
                max_caido = milimetros;
                // Aparte guardo el numero de la iteracion que conforma ese maximo. 
                dia_mayor_caido = i;
            } 

            if (milimetros < min_caido){

                // Si el valor ingresado de milimetros es menor al valor guardado en min_caido hay un nuevo minimo, guardo ese nuevo valor a la vairable min_caido
                min_caido = milimetros;
                // Aparte guardo el numero de la iteracion que conforma ese minimo. 
                dia_menor_caido = i;
            } 
        }

        // Por ultimo voy sumando los valores de milimetros a la variable acumuladora de cont_milimetros

        cont_milimetros = cont_milimetros = milimetros;
    }

    // Una vez terminado el bucle voy calcular el promedio de milimetros llovidos durante un mes. 
    
    promedio = cont_milimetros / 30.0;

    // Imprimo por pantalla los valores obtenidos. 
    printf("DIA DONDE CAYERON MAS MILIMETROS\n");
    printf("Dia: %i\n", dia_mayor_caido);
    printf("Milimetros: %i\n", max_caido);
    printf("DIA DONDE CAYERON MENOS MILIMETROS\n");
    printf("Dia: %i\n", dia_menor_caido);
    printf("Milimetros: %i\n", min_caido);
    printf("PROMEDIO DE MILIMETROS CAIDOS EN EL MES\n");
    printf("Promedio: %.2f\n", promedio);

    return 0;
}
