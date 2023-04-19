#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DISEÑAR EN PSEUDOCODIGO Y CODIFICAR EN C UN ALGORITMO QUE PERMITA INGRESAR 10 NÚMEROS, NINGUNO DE ELLOS IGUAL A CERO. SE PIDE SUMAR LOS POSITIVOS, OBTENER EL PRODUCTO DE LOS NEGATIVOS Y LUEGO MOSTRAR AMBOS RESULTADOS. 
    
    // Declaro mis variables
    int i;
    int num;
    int acumulador_positivos = 0;
    int acumulador_negativos = 1;


    // Incio el bucle for con una repeticion de 10 veces
    for (i = 0; i < 10; i++)
    {   
        // Ingreso el valor de la variable num
        printf("Ingrese un numero: ");
        scanf(" %i", &num);


        // Si num es positivo y es distinto de cero
        if (num > 0 && num != 0)
        {
            // Sumame todos los positivos
            acumulador_positivos = acumulador_positivos + num;
        } else if (num < 0 && num != 0) // Si num es negativo y es distinto de cero
        {   
            // Multiplicame los negativos
            acumulador_negativos = acumulador_negativos * num;
        }
        
    }

    // Imprimo por pantalla
    printf("La suma total de positivos es de %i\n", acumulador_positivos);
    printf("El producto total de negativos es de %i\n", acumulador_negativos);
    
    return 0;
}
