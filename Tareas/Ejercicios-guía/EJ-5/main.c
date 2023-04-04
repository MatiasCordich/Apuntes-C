#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DISEÑAR UN ALGORITMO QUE CALCULE LA SUPERFICIE DE UN TRIANGULO A PARTIR DEL INGRESO DE SU BASE Y ALTURA. DEBE MOSTRAR EL RESULTADO 

    int base;
    int altura;
    int area_triangulo;

    printf("Ingrese la base: ");
    scanf("%i", &base);

    printf("Ingrese la altura: ");
    scanf("%i", &altura);

    area_triangulo = (base * altura)/ 2;

    printf("El area del triangulo es de %i cms", area_triangulo);
    return 0;
}
