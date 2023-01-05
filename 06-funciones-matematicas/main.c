#include <stdio.h>

#include <math.h> // Para utilizar distintas funciones matematicas utilizamos esta libreria

int main(int argc, char const *argv[])
{
    
    double a = sqrt(9); // Raiz cuadrada
    double b = pow(3,4); // Potencia, el primer argumento es la base y el segundo es el exponente
    int c = round(3.14); // Redondea para arriba o para abajo dependiendo del decimal
    int d = ceil(3.15); // Redondea para arriba siempre
    int e = floor(3.99); // Redondea para abajo siempre
    double f = fabs(-200); // Devuelve el valor absoluto de un numero
    double g = log(2); // Devuelve el logaritmo de un numero
    double h = sin(45); // Funcion trigonometrica, devuelve el seno de un numero
    double i = cos(45); // Funcion trigonometrica, devuelve el coseno de un numero
    double j = tan(45); // Funcion trigonometrica, devuelve la tangente de un numero

    printf("%f\n", a);
    printf("%f\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%f\n", f);
    printf("%f\n", g);
    printf("%f\n", h);
    printf("%f\n", i);
    printf("%f\n", j);
    
    return 0;
}
