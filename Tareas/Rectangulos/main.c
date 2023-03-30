#include <stdio.h>

int main(int argc, char const *argv[])
{

    // Determinar por teclado la base y la altura de dos 2 rectangulos y sacar la diferencia entre AREAS y PERIMETROS de ambos
    
    int baseRectangulo_1;
    int alturaRectangulo_1;
    int baseRectangulo_2;
    int alturaRectangulo_2;

    printf("Ingrese la base del Rectangulo 1: ");
    scanf("%i", &baseRectangulo_1);
    printf("Ingrese la altura del Rectangulo 1: ");
    scanf("%i", &alturaRectangulo_1);

    printf("Ingrese la base del Rectangulo 2: ");
    scanf("%i", &baseRectangulo_2);
    printf("Ingrese la altura del Rectangulo 2: ");
    scanf("%i", &alturaRectangulo_2);

    int areaRectangulo_1 = baseRectangulo_1 * alturaRectangulo_1;

    int areaRectangulo_2 = baseRectangulo_2 * alturaRectangulo_2;

    int perimetroRectangulo_1 = 2 * (baseRectangulo_1 + alturaRectangulo_1);
    int perimetroRectangulo_2 = 2 * (baseRectangulo_2 + alturaRectangulo_2);

    int difAreasRectangulos = areaRectangulo_1 - areaRectangulo_2;
    int difPerimetrosRectangulos = perimetroRectangulo_1 - perimetroRectangulo_2;

    printf("El area del Rectangulo 1 es de: %i cm\n", areaRectangulo_1);
    printf("El perimetro del Rectangulo 1 es de: %i cm\n", perimetroRectangulo_1);
    printf("El area del Rectangulo 2 es de: %i cm\n", areaRectangulo_2);
    printf("El perimetro del Rectangulo 2 es de: %i cm\n", perimetroRectangulo_2);
    printf("La diferencia de areas de ambos rectanguulos es de: %i cm\n", difAreasRectangulos);
    printf("La diferencia de perimetros de ambos rectangulos es de: %i cm\n", difPerimetrosRectangulos);
    return 0;
}
