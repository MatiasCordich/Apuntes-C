#include <stdio.h>

/*
    Declaro mi estructura de rectangulo que tiene lo siguiente 
    - base
    - altura
    - area
*/
typedef struct
{
    double base;
    double altura;
    double area;
} s_rectangulo;

/*
    Declaro funcioon que me calcula el area del rectangulo
    - es una funcion que me devuelve un double
    - recibe la base que es de tipo double
    - recibe la altura que es de tipo double
    - retorna un area que es de tipo double
*/
double area_rectangulo (double base, double altura) {
    double area = base * altura;
    return area;
}

int main(int argc, char const *argv[])
{
    // Creo mi variable rectangulo1 en base a mi estructura rectangulo
    s_rectangulo rectangulo1;

    // Ingreso los valores internos de mi rectangulo1
    printf("Ingrese la base del rectangulo: ");
    scanf("%lf", &rectangulo1.base);

    printf("Ingrese la altura del rectangulo: ");
    scanf("%lf", &rectangulo1.altura);

    // Calculo el area de mi rectangulo1 usando la funcion area_rectangulo utilizando los valores que ingrese anteriormente
    rectangulo1.area = area_rectangulo(rectangulo1.base, rectangulo1.altura);

    // Imprimo por pantalla el resultado del area de mi rectangulo1
    printf("El area del rectangulo es de: %.1lf", rectangulo1.area);
    return 0;
}
