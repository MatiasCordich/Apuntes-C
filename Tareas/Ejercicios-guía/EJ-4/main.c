#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DISEÑAR UN ALGORITMO QUE CALCULA LA LONGITUD DE LA CIRCUNFERENCIA Y EL AREA DE UN CIRCULO DE RADIO A RADIO

    int radio;
    float PI = 3.141592;
    float longitud_circunferencia;
    float area_circulo;

    printf("Ingrese el radio: ");
    scanf("%i", &radio);

    longitud_circunferencia = 2*radio*PI;
    area_circulo = PI*(radio*radio);

    printf("La circuferencia del circulo es de %f cms\n", longitud_circunferencia);
    
    printf("El area del circulo es de %f cms", area_circulo);
    return 0;
}
