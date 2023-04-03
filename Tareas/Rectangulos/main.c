#include <stdio.h>

int main(int argc, char const *argv[])
{

    // DETERMINAR POR TECLADO LA BASE Y LA ALTURA DE 2 REACTANGULOS Y CALCULAR LA DIFERENCIA DE AREAS y PERIMETROS DE AMBOS


    // Determino las variables de base y altura para cada rectangulo 
    int baseRectangulo_1;
    int alturaRectangulo_1;
    int baseRectangulo_2;
    int alturaRectangulo_2;

    // Determino las varaible de area para cada rectangulo
    int areaRectangulo_1;
    int areaRectangulo_2;

    // Determino las variable de perimetro para cada rectangulo
    int perimetroRectangulo_1;
    int perimetroRectangulo_2;

    // Determino las variables que son la diferencia de areas y de perimietros de ambos rectangulos
    int difAreasRectangulos;
    int difPerimetrosRectangulos;

    // Ingreso los valores de las variables base y altura del RECTANGULO 1
    printf("Ingrese la base del Rectangulo 1: ");
    scanf("%i", &baseRectangulo_1);
    printf("Ingrese la altura del Rectangulo 1: ");
    scanf("%i", &alturaRectangulo_1);

    // Ingreso los valores de las variables base y altura del RECTANGULO 2
    printf("Ingrese la base del Rectangulo 2: ");
    scanf("%i", &baseRectangulo_2);
    printf("Ingrese la altura del Rectangulo 2: ");
    scanf("%i", &alturaRectangulo_2);

    // Calculo el area del RECTANGULO 1
    areaRectangulo_1 = baseRectangulo_1 * alturaRectangulo_1;

    // Calculo el area del RECTANGULO 2
    areaRectangulo_2 = baseRectangulo_2 * alturaRectangulo_2;

    // Calculo el perimetro del RECTANGULO 1
    perimetroRectangulo_1 = 2 * (baseRectangulo_1 + alturaRectangulo_1);

    // Calculo el perimetro del RECTANGULO 2
    perimetroRectangulo_2 = 2 * (baseRectangulo_2 + alturaRectangulo_2);

    // Calculo la diferencia de AREAS del RECTANGULO 1 y RECTANGULO 2
    difAreasRectangulos = areaRectangulo_1 - areaRectangulo_2;

    // Calculo la diferencia de PERIMETROS del RECTANGULO 1 y RECTANGULO 2
    difPerimetrosRectangulos = perimetroRectangulo_1 - perimetroRectangulo_2;

    // Imprimo por consola los resultados
    printf("El area del Rectangulo 1 es de: %i cm\n", areaRectangulo_1);
    printf("El perimetro del Rectangulo 1 es de: %i cm\n", perimetroRectangulo_1);
    printf("El area del Rectangulo 2 es de: %i cm\n", areaRectangulo_2);
    printf("El perimetro del Rectangulo 2 es de: %i cm\n", perimetroRectangulo_2);
    printf("La diferencia de areas de ambos rectanguulos es de: %i cm\n", difAreasRectangulos);
    printf("La diferencia de perimetros de ambos rectangulos es de: %i cm\n", difPerimetrosRectangulos);

    return 0;
}
