#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DETERMINAR EL AREA DE UN TRIANGULO

    int base;
    int altura;
    int area;

    printf("Ingrese la base del Triangulo: ");
    scanf("%i", &base);
    printf("Ingrese la altura del Triangulo: ");
    scanf("%i", &altura);

    area = (base * altura)/2;

    printf("El area del triangulo es de: %i", area);
    
   
    return 0;
}