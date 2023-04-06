#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DISEÑAR UN ALGORITMO QUE CALCULA LA LONGITUD DE LA CIRCUNFERENCIA Y EL AREA DE UN CIRCULO DE RADIO A RADIO

    int radio;
    float PI = 3.141592;
    float longitud_circunferencia;
    float area_circulo;

    // Ingreso el radio del numero que es un valor de tipo int
    printf("Ingrese el radio: ");
    scanf("%i", &radio);

    // Calculo la longintud de la circunferencia y el area de un circulo
    longitud_circunferencia = 2*radio*PI;
    area_circulo = PI*(radio*radio);

    // Imprimo por pantalla ambos resultados 
    printf("La circuferencia del circulo es de %f cms\n", longitud_circunferencia);
    
    printf("El area del circulo es de %f cms", area_circulo);
    return 0;
}
