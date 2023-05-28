#include <stdio.h>

/*
    Declaro mi estructura de rectangulo que tiene lo siguiente 
    - base
    - altura
    - perimetro
*/
typedef struct
{
    double base;
    double altura;
    double perimetro;
} s_rectangulo;

/*
    Declaro funcioon que me calcula el area del rectangulo
    - es una funcion que me devuelve un double
    - recibe la BASE que es de tipo double
    - recibe la ALTURA que es de tipo double
    - retorna un PERIMETRO que es de tipo double
*/
double perimetro_rectangulo (double base, double altura) {
    double perimetro = 2*(base * altura);
    return perimetro;
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

    // Calculo el perimetro de mi rectangulo1 usando la funcion perimetro_rectangulo utilizando los valores que ingrese anteriormente
    rectangulo1.perimetro = perimetro_rectangulo(rectangulo1.base, rectangulo1.altura);

    // Imprimo por pantalla el resultado del perimetro de mi rectangulo1
    printf("El perimetro del rectangulo es de: %.1lf", rectangulo1.perimetro);
    return 0;
}
