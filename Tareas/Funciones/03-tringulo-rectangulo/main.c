#include <stdio.h>

/*
    Declaro mi estructura de triangulo_rectangulo que tiene lo siguiente 
    - base
    - altura
    - area
*/
typedef struct
{
    double base;
    double altura;
    double area;
} s_triangulo_rectangulo;

/*
    Declaro funcioon que me calcula el area del triangulo rectangulo
    - es una funcion que me devuelve un double
    - recibe la BASE que es de tipo double
    - recibe la ALTURA que es de tipo double
    - retorna un AREA que es de tipo double
*/
double area_triangulo_rectangulo (double base, double altura) {
    double area = (base * altura)/2;
    return area;
}

int main(int argc, char const *argv[])
{
    // Creo mi variable triangulo_rectangulo1 en base a mi estructura s_triangulo_rectangulo
    s_triangulo_rectangulo triangulo_rectangulo1;

    // Ingreso los valores internos de mi triangulo_rectangulo1
    printf("Ingrese la base del rectangulo: ");
    scanf("%lf", &triangulo_rectangulo1.base);

    printf("Ingrese la altura del rectangulo: ");
    scanf("%lf", &triangulo_rectangulo1.altura);

    // Calculo el area de mi triangulo_rectangulo1 usando la funcion area_triangulo_rectangulo utilizando los valores que ingrese anteriormente
    triangulo_rectangulo1.area = area_triangulo_rectangulo(triangulo_rectangulo1.base, triangulo_rectangulo1.altura);

    // Imprimo por pantalla el resultado del perimetro de mi triangulo_rectangulo1
    printf("El perimetro del triangulo rectangulo es de: %.1lf", triangulo_rectangulo1.area);
    return 0;
}
